#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QCoreApplication>


void initQss()
{
    QString fileName = QCoreApplication::applicationDirPath();
    qDebug()<<fileName;
    QFile file("./res/qss/qss.css");
    file.open(QIODevice::ReadWrite);
    QTextStream in(&file);
    QString css = in.readAll();
    qDebug()<<css;
    qApp->setFont(QFont("微软雅黑", 15));
    file.close();
    return;
}

int RegiesterOwnType(){
    return 0;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    hfMainWindow w;
    w.show();

    return a.exec();
}
