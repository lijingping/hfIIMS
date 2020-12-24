#include "ui_mainwindow.h"
#include <QDebug>
#include <QMouseEvent>
#include "mainwindow.h"
#include <QSpacerItem>
#include <QPainter>

hfMainWindow::hfMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::hfMainWindow)
{
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->setupUi(this);

    connect(ui->main_title,SIGNAL(OnCloseWindow()),this,SLOT(OnCloseWindow()));
    ui->main_title->installEventFilter(this);

    QFile file("./res/qss/mainwindow.css");
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug()<<"error css read";
        exit(0);
    }
    QTextStream in(&file);
    QString css = in.readAll();
    qDebug()<<css;
    this->setStyleSheet(css);


}

hfMainWindow::~hfMainWindow()
{
    delete ui;
}

bool hfMainWindow::eventFilter(QObject *obj, QEvent *ev)
{
   if(obj->objectName() == "title"){
       if (ev->type() == QEvent::MouseMove)
       {
            QMouseEvent * mouseEv = dynamic_cast<QMouseEvent *>(ev);
            if (ev)
            {
                //onMouseMoveEvent(mouseEv);
                return true;
            }
       }
       else if (ev->type() == QEvent::MouseButtonPress)
       {
            QMouseEvent * mouseEv = dynamic_cast<QMouseEvent *>(ev);
            if (ev)
            {
                //onMousePressEvent(mouseEv);
                return true;
            }
        }
        else if (ev->type() == QEvent::MouseButtonRelease)
        {
            setCursor(Qt::ArrowCursor);
            QMouseEvent * mouseEv = dynamic_cast<QMouseEvent *>(ev);
            if (ev)
            {
                //onMouseReleaseEvent(mouseEv);
                return true;
            }
        }
   }
   return false;
}

void hfMainWindow::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

void hfMainWindow::OnCloseWindow()
{
    qDebug()<<"window close";
    this->close();
}
