#include "hfHeartRate.h"

#include <QDebug>
#include <QFile>
#include "ui_hfHeartRate.h"

hfHeartRate::hfHeartRate(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::hfHeartRate)
{
    ui->setupUi(this);

    QFile file2("./res/qss/hfHeartRate.css");
    if (!file2.open(QIODevice::ReadOnly)) {
        qDebug()<<"error css read";
        exit(0);
    }
    QTextStream in(&file2);
    QString css = in.readAll();
    this->setStyleSheet(css);
}

hfHeartRate::~hfHeartRate()
{
    delete ui;
}
