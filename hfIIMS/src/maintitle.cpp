#include "maintitle.h"
#include "ui_maintitle.h"
#include <QDateTime>
#include <QDebug>
#include <QFile>
#include <QPainter>
#include "database.h"
#include "hfModifyUser.h"

hfMainTitle::hfMainTitle(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hfMainTitle),
    m_phfModifyUser(NULL)
{
    QFile file2("./res/qss/hfmaintitle.css");
    if (!file2.open(QIODevice::ReadOnly)) {
         qDebug()<<"error css read";
         exit(0);
    }
    QTextStream in2(&file2);
    QString css = in2.readAll();
    this->setStyleSheet(css);

    ui->setupUi(this);
    connect(&this->m_timer,SIGNAL(timeout()),this,SLOT(UpdateTime()));
    this->m_timer.start(1000);

    QDateTime l_date = QDateTime::currentDateTime();
    //年月日
    QString l_specific_date = l_date.toString("yyyy/MM/dd   ");
    //获取星期，“周一”，“周二”，“周三”等等
    QString l_week = l_date.toString("ddd");
    //时分
    QString l_time = l_date.toString("   hh:mm");
    ui->time_label->setText(l_specific_date + l_week + l_time);
}

hfMainTitle::~hfMainTitle()
{
    delete database::getInstance();
    delete ui;
}

void hfMainTitle::UpdateTime()
{
    QDateTime l_date = QDateTime::currentDateTime();
    //年月日
    QString l_specific_date = l_date.toString("yyyy/MM/dd   ");
    //获取星期，“周一”，“周二”，“周三”等等
    QString l_week = l_date.toString("ddd");
    //时分
    QString l_time = l_date.toString("   hh:mm");
    ui->time_label->setText(l_specific_date + l_week + l_time);
}

void hfMainTitle::OnUpdateUserName()
{
    database *l_userDb = database::getInstance();
    hfSqlTables_user_data l_userData = l_userDb->getUserData();
    ui->user_name->setText(l_userData.username);
}

void hfMainTitle::paintEvent(QPaintEvent *)
{
      QStyleOption opt;
      opt.init(this);
      QPainter p(this);
      style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

void hfMainTitle::on_close_clicked()
{
    emit this->OnCloseWindow();
}

void hfMainTitle::on_user_name_clicked()
{
    if (m_phfModifyUser != NULL) {
        m_phfModifyUser->close();
    }

    hfModifyUser *l_hfModifyUser = new hfModifyUser();
    l_hfModifyUser->setObjectName(QStringLiteral("hfModifyUser"));

    connect(l_hfModifyUser, SIGNAL(OnUpdateUserName()),this, SLOT(OnUpdateUserName()));
    l_hfModifyUser->installEventFilter(this);


    l_hfModifyUser->setWindowIcon(QIcon(":/img/logo_icon.png"));
    l_hfModifyUser->setWindowTitle(tr("修改用户"));
    l_hfModifyUser->setWindowFlags(Qt::Tool);
    l_hfModifyUser->show();

    m_phfModifyUser = l_hfModifyUser;

    const QRect &geometry = ui->user_name->geometry();
    QPoint pos = ui->user_name->mapToGlobal(QPoint(0, 0));
    m_phfModifyUser->move(pos.x()+geometry.width()-m_phfModifyUser->width(), pos.y()+geometry.height());
}
