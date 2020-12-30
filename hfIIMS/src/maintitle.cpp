#include "maintitle.h"
#include "ui_maintitle.h"
#include <QDateTime>
#include <QDebug>
#include <QFile>
#include <QPainter>
#include "database.h"

hfMainTitle::hfMainTitle(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hfMainTitle)
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
    if(l_userDb->queryData(l_userData.username, l_userData.password))
    {
        ui->user_name->setText(l_userData.username);
    }
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
    ui_arrow
}
