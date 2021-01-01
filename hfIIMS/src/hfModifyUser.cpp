#include "hfModifyUser.h"
#include <QMessageBox>
#include "ui_hfModifyUser.h"
#include "database.h"

hfModifyUser::hfModifyUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hfModifyUser)
{
    ui->setupUi(this);

    this->refreshData();

    ui->modify_age->setValidator(new QIntValidator());
    ui->modify_phone->setValidator(new QIntValidator());
    ui->modify_phone->setMaxLength(1000000);
}

hfModifyUser::~hfModifyUser()
{
    delete ui;
}

void hfModifyUser::refreshData()
{
    hfSqlTables_user_data l_userData = database::getInstance()->getUserData();
    ui->modify_username->setText(l_userData.username);
    ui->modify_age->setText(QString::number(l_userData.age));
    ui->modify_work->setText(l_userData.work);
    ui->modify_phone->setText(QString::number(l_userData.phone));
    ui->modify_desc_textEdit->setText(l_userData.desc);
}

void hfModifyUser::on_modify_save_clicked()
{
    if (ui->modify_username->text().isEmpty())
    {
        QMessageBox::information(NULL, "error", tr("用户名空"), QMessageBox::Ok);
        return;
    }

    database *l_userDb = database::getInstance();
    hfSqlTables_user_data userData;
    userData.username = ui->modify_username->text();
    userData.age = ui->modify_age->text().toInt();
    userData.work = ui->modify_work->text();
    userData.phone = ui->modify_phone->text().toInt();
    userData.desc = ui->modify_desc_textEdit->toPlainText();
    if(l_userDb->modifyData(userData)){
        emit this->OnUpdateUserName();

        QMessageBox::information(NULL, "", tr("保存成功"), QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(NULL, "error", tr("保存失败"), QMessageBox::Ok);
    }
}
