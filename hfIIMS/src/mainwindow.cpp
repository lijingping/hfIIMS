#include "mainwindow.h"
#include <QDebug>
#include <QMouseEvent>
#include <QPainter>
#include <QSpacerItem>
#include "ui_mainwindow.h"
#include "database.h"
#include "hfLogo.h"

hfMainWindow::hfMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::hfMainWindow)
{
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui->setupUi(this);

    connect(ui->main_title,SIGNAL(OnCloseWindow()),this,SLOT(OnCloseWindow()));
    ui->main_title->installEventFilter(this);

    hfLogo *l_hfLogo = new hfLogo(this);
    l_hfLogo->setObjectName(QStringLiteral("hfLogo"));
//    l_hfLogo->move();
    l_hfLogo->show();

    QFile file("./res/qss/mainwindow.css");
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug()<<"error css read";
        exit(0);
    }
    QTextStream in(&file);
    QString css = in.readAll();
    qDebug()<<css;
    this->setStyleSheet(css);

    database *l_userDb = database::getInstance();
    QString l_username = "hfll";
    if(l_userDb->queryUsername(l_username)){
        //在数据库中查询到了就跳转到主页
        if(l_userDb->queryPassword(l_username, "123456")){
//            major->show();//跳转到major页面
            this->close(); //关闭登陆页面
        }
        //在数据库中查询不到即弹出信息错误窗口
        else{
            QMessageBox::information(NULL,"登录","密码错误",QMessageBox::Ok);
        }
    }
    else{
        QMessageBox::information(NULL,"登录","用户名不存在",QMessageBox::Ok);
    }
    return;

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
