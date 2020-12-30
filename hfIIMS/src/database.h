#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>

typedef enum
{
    ID = 0,
    USERNAME,
    PASSWORD,
    ADDRESS,
    AGE,
    EMAIL,
    DESC,
    LAST_LOGON_DATE,
    CREATE_DATE,
    MODIFY_DATE
}hfSqlTables_user;

struct hfSqlTables_user_data {
    int id;
    QString username;
    QString password;
    QString address;
    int age;
    QString email;
    QString desc;
    QString last_logo_date;
    QString create_date;
    QString modify_date;
};

class database : public QObject
{
    Q_OBJECT
public:
    static database *getInstance();
    virtual ~database();

    bool addRegiserUser(const QString &username,const QString &password);
    bool logo(const QString &username, const QString &password);
    bool modifyPassword(const QString &username, const QString &password);
    bool queryPhone(const QString &phone);
    bool queryUsername(const QString &username);
    bool queryPassword(const QString &username,const QString &password);
    bool queryData(const QString &username,const QString &password);
    hfSqlTables_user_data getUserData();

signals:

public slots:

private:
    explicit database(QObject *parent = nullptr);
    static database *m_userDb;
    hfSqlTables_user_data m_user_data;
};

#endif // DATABASE_H
