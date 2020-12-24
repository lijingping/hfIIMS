#include "maintitle.h"
#include "ui_maintitle.h"
#include <QDateTime>
#include <QDebug>
#include <QFile>
#include <QPainter>

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

    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy/MM/dd hh:mm:ss");
    ui->time_label->setText(str);
}

hfMainTitle::~hfMainTitle()
{
    delete ui;
}

void hfMainTitle::UpdateTime()
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy/MM/dd hh:mm:ss ");
    ui->time_label->setText(str);
}

void hfMainTitle::paintEvent(QPaintEvent *)
{
      QStyleOption opt;
      opt.init(this);
      QPainter p(this);
      style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

void hfMainTitle::on_pushButton_3_clicked()
{
    emit this->OnCloseWindow();
}
