#include "database.h"
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

#define CONNECTION_NAME "hfIIMS"

database* database::m_userDb = NULL;

database::database(QObject *parent) : QObject(parent)
{
    QSqlDatabase l_db = QSqlDatabase::addDatabase("QSQLITE", CONNECTION_NAME);
    //路径
    l_db.setDatabaseName("D:\\project\\db\\hfIIMS.db");
    //打开数据库
    bool l_ok = l_db.open();
    if(!l_ok){
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
    QSqlDatabase l_db = QSqlDatabase::database(CONNECTION_NAME);
    l_db.close();
}

//注册功能
bool database::addRegiserUser(const QString &username, const QString &password)
{
    //调用QSqlDatabase的静态函数databas创建了一个名为hfIIMS的连接
    QSqlDatabase l_db = QSqlDatabase::database(CONNECTION_NAME);

    //创建一个关联的QSqlQuery对象，由QSqlQuery来实现以下工作
    QSqlQuery  l_query(l_db);

    //将输入username、password的数据插入表中
    l_query.prepare(
        "INSERT INTO tb_user (id,username,password,last_logo_date,modify_date,create_date) VALUES ((select count(*)+1 from tb_user),?, ?,datetime('now','localtime'),datetime('now','localtime'),datetime('now','localtime'))");

    l_query.addBindValue(username);
    l_query.addBindValue(password);
    bool l_ok = l_query.exec(); //判断打开数据库是否成功；
    if(!l_ok){
        qDebug() << "Fail add regiser user : " << l_query.lastError().text();
    }

    return l_ok;
}

//注册功能
bool database::logo(const QString &username, const QString &password)
{
    //调用QSqlDatabase的静态函数databas创建了一个名为hfIIMS的连接
    QSqlDatabase l_db = QSqlDatabase::database(CONNECTION_NAME);

    //创建一个关联的QSqlQuery对象，由QSqlQuery来实现以下工作
    QSqlQuery  l_query(l_db);

    //将输入username、password的数据插入表中
    l_query.prepare("update tb_user set last_logon_date = datetime('now','localtime') where username = ? and password = ?");

    l_query.addBindValue(username);
    l_query.addBindValue(password);
    bool l_ok = l_query.exec(); //判断打开数据库是否成功；
    if(!l_ok){
        qDebug() << "Fail add regiser user : " << l_query.lastError().text();
    }

    m_user_data.username = username;
    m_user_data.password = password;

    return l_ok;
}

bool database::modifyPassword(const QString &username, const QString &password)
{
    //调用QSqlDatabase的静态函数databas创建了一个名为hfIIMS的连接
    QSqlDatabase l_db = QSqlDatabase::database(CONNECTION_NAME);

    //创建一个关联的QSqlQuery对象，由QSqlQuery来实现以下工作
    QSqlQuery  l_query(l_db);

    //将输入username、password的数据插入表中
    l_query.prepare("update tb_user set password = ? where username = ?");

    l_query.addBindValue(password);
    l_query.addBindValue(username);
    bool l_ok = l_query.exec(); //判断打开数据库是否成功；
    if(!l_ok){
        qDebug() << "Fail add regiser user : " << l_query.lastError().text();
    }

    return l_ok;
}

//登陆的电话检测
bool database::queryPhone(const QString &phone)
{
    QSqlDatabase l_db = QSqlDatabase::database(CONNECTION_NAME);
    QSqlQuery l_query(l_db);

    //判断数据库中是否存在所输入号码
    l_query.prepare("select *from tb_user where phone=?");
    l_query.addBindValue(phone);
    bool l_ok = l_query.exec();
    if(!l_ok){
        qDebug() << "Fail query register phone" << l_db.lastError().text();
        return false;
    }
    if(l_query.next()){
        return true;
    }
    else{
        return false;
    }
}

//登陆的用户名检测
bool database::queryUsername(const QString &username)
{
    QSqlDatabase l_db = QSqlDatabase::database(CONNECTION_NAME);
    QSqlQuery l_query(l_db);
    l_query.prepare("select *from tb_user where username=?");
    l_query.addBindValue(username);
    bool l_ok = l_query.exec();
    if(!l_ok){
        qDebug() << "Fail query register username" << l_db.lastError().text();
        return false;
    }
    if(l_query.next()){
        return true;
    }
    else{
        return false;
    }
}

//登陆的密码检测
bool database::queryPassword(const QString &username,const QString &password)
{
    QSqlDatabase l_db = QSqlDatabase::database(CONNECTION_NAME);
    QSqlQuery l_query(l_db);
    l_query.prepare("select *from tb_user where username=? and password=?");
    l_query.addBindValue(username);
    l_query.addBindValue(password);
    bool l_ok = l_query.exec();
    if(!l_ok){
        qDebug() << "Fail query register password" << l_db.lastError().text();
        return false;
    }
    if(l_query.next()){
        return true;
    }
    else{
        return false;
    }
}

bool database::queryData(const QString &username, const QString &password)
{
    QSqlDatabase l_db = QSqlDatabase::database(CONNECTION_NAME);
    QSqlQuery l_query(l_db);
    l_query.prepare("select *from tb_user where username=? and password=?");
    l_query.addBindValue(username);
    l_query.addBindValue(password);
    bool l_ok = l_query.exec();
    if(!l_ok)
    {
        qDebug() << "Fail query register password" << l_db.lastError().text();
        return false;
    }
    if(l_query.next())
    {
        m_user_data.id = l_query.value(ID).toInt();
        m_user_data.username = l_query.value(USERNAME).toString();
        m_user_data.password = l_query.value(PASSWORD).toString();
        m_user_data.address = l_query.value(ADDRESS).toString();
        m_user_data.age = l_query.value(AGE).toInt();
        m_user_data.email = l_query.value(EMAIL).toString();
        m_user_data.desc = l_query.value(DESC).toString();
        m_user_data.last_logo_date = l_query.value(LAST_LOGON_DATE).toString();
        m_user_data.create_date = l_query.value(CREATE_DATE).toString();
        m_user_data.modify_date = l_query.value(MODIFY_DATE).toString();
        return true;
    }
    else
    {
        return false;
    }
}

hfSqlTables_user_data database::getUserData()
{
    return m_user_data;
}
