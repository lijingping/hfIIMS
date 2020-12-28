#include "hfVolumeSet.h"

#include <QDebug>
#include <QFile>
#include "ui_hfVolumeSet.h"

hfVolumeSet::hfVolumeSet(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::hfVolumeSet)
{
    QFile file2("./res/qss/hfVolumeSet.css");
    if (!file2.open(QIODevice::ReadOnly)) {
        qDebug()<<"error css read";
        exit(0);
    }

    QTextStream in(&file2);
    QString css = in.readAll();
    this->setStyleSheet(css);

    ui->setupUi(this);
}

hfVolumeSet::~hfVolumeSet()
{
    delete ui;
}
