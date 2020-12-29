#include "database.h"
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

#define CONNECTION_NAME "hfIIMS"

database* database::m_userDb = NULL;

database::database(QObject *parent) : QObject(parent)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", CONNECTION_NAME);
    //路径
    db.setDatabaseName("D:\\project\\db\\hfIIMS.db");
    bool ok = db.open(); //打开数据库
    if(!ok){
        /*<< db.lastError.text();*/
       qDebug() << "Fail to open database,error:" ;
    }
}

database *database::getInstance()
{
    if (m_userDb == NULL)
    {
        m_userDb = new database;
    }
    return m_userDb;
}

database::~database()
{
    delete m_userDb;
}

//注册功能
bool database::addRegiserUser(const QString &username, const QString &password, const QString &phone)
{
    //调用QSqlDatabase的静态函数databas创建了一个名为hfIIMS的连接
    QSqlDatabase db = QSqlDatabase::database(CONNECTION_NAME);

    //创建一个关联的QSqlQuery对象，由QSqlQuery来实现以下工作
    QSqlQuery  query(db);

    //将输入username、password、phone 的数据插入表中；
    query.prepare("INSERT INTO User (username,password,phone) "
                  "VALUES (?, ?, ?)");

    query.addBindValue(username);
    query.addBindValue(password);
    query.addBindValue(phone);
    bool ok = query.exec(); //判断打开数据库是否成功；
    if(!ok){
        qDebug() << "Fail add regiser user : " << query.lastError().text();
    }

    return ok;
}

//登陆的电话检测
bool database::queryPhone(const QString &phone)
{
    QSqlDatabase db = QSqlDatabase::database(CONNECTION_NAME);
    QSqlQuery query(db);

    //判断数据库中是否存在所输入号码
    query.prepare("select *from tb_user where phone=?");
    query.addBindValue(phone);
    bool ok = query.exec();
    if(!ok){
        qDebug() << "Fail query register phone" << db.lastError().text();
        return false;
    }
    if(query.next()){
        return true;
    }
    else{
        return false;
    }
}

//登陆的用户名检测
bool database::queryUsername(const QString &username)
{
    QSqlDatabase db = QSqlDatabase::database(CONNECTION_NAME);
    QSqlQuery query(db);
    query.prepare("select *from tb_user where name=?");
    query.addBindValue(username);
    bool ok = query.exec();
    if(!ok){
        qDebug() << "Fail query register username" << db.lastError().text();
        return false;
    }
    if(query.next()){
        return true;
    }
    else{
        return false;
    }
}

//登陆的密码检测
bool database::queryPassword(const QString &username,const QString &password)
{
    QSqlDatabase db = QSqlDatabase::database(CONNECTION_NAME);
    QSqlQuery query(db);
    query.prepare("select *from tb_user where name=? and password=?");
    query.addBindValue(username);
    query.addBindValue(password);
    bool ok = query.exec();
    if(!ok){
        qDebug() << "Fail query register password" << db.lastError().text();
        return false;
    }
    if(query.next()){
        return true;
    }
    else{
        return false;
    }
}
