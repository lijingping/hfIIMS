#include "hfLogo.h"
#include <QMessageBox>
#include "database.h"
#include "ui_hfLogo.h"

hfLogo::hfLogo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hfLogo)
{
    ui->setupUi(this);
}

hfLogo::~hfLogo()
{
    delete ui;
}

void hfLogo::on_logo_enter_clicked()
{
    QString l_username = ui->logo_username->text();
    QString l_password = ui->logo_password->text();
    if (l_username.isEmpty())
    {
        QMessageBox::information(NULL, "error", "用户名空", QMessageBox::Ok);
        return;
    }
    else if (l_password.isEmpty())
    {
        QMessageBox::information(NULL, "error", "密码为空", QMessageBox::Ok);
        return;
    }

    database *l_userDb = database::getInstance();
    if(l_userDb->queryUsername(l_username))
    {
        if(l_userDb->queryPassword(l_username, l_password)){
            //关闭登陆页面
            this->close();
            l_userDb->logo(l_username, l_password);
            emit this->OnUpdateUserName();
        }
        //在数据库中查询不到即弹出信息错误窗口
        else
        {
            QMessageBox::information(NULL, "error", "密码错误", QMessageBox::Ok);
        }
    }
    else
    {
        QMessageBox::information(NULL, "error", "用户名错", QMessageBox::Ok);
    }
}

void hfLogo::on_logo_modify_clicked()
{
    QString l_username = ui->logo_username->text();
    QString l_password = ui->logo_password->text();
    if (l_username.isEmpty())
    {
        QMessageBox::information(NULL, "error", "用户名空", QMessageBox::Ok);
        return;
    }
    else if (l_password.isEmpty())
    {
        QMessageBox::information(NULL, "error", "密码为空", QMessageBox::Ok);
        return;
    }

    database *l_userDb = database::getInstance();
    if(l_userDb->modifyPassword(l_username, l_password)){
        QMessageBox::information(NULL, "", "修改成功", QMessageBox::Ok);
    }
    //在数据库中查询不到即弹出信息错误窗口
    else
    {
        QMessageBox::information(NULL, "error", "修改失败", QMessageBox::Ok);
    }
}

void hfLogo::on_logo_register_clicked()
{
    QString l_username = ui->logo_username->text();
    QString l_password = ui->logo_password->text();
    if (l_username.isEmpty())
    {
        QMessageBox::information(NULL, "error", "用户名空", QMessageBox::Ok);
        return;
    }
    else if (l_password.isEmpty())
    {
        QMessageBox::information(NULL, "error", "密码为空", QMessageBox::Ok);
        return;
    }

    database *l_userDb = database::getInstance();
    if(l_userDb->addRegiserUser(l_username, l_password)){
        QMessageBox::information(NULL, "", "注册成功", QMessageBox::Ok);
    }
    //在数据库中查询不到即弹出信息错误窗口
    else
    {
        QMessageBox::information(NULL, "error", "注册失败", QMessageBox::Ok);
    }
}
