#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>

typedef enum
{
    ID = 0,
    USERNAME,
    PASSWORD,
    ADDRESS,
    EMAIL,
    DESC,
    LAST_LOGON_DATE,
    CREATE_DATE,
    MMODIFY_DATE
}hfSqlTables_User;

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

signals:

public slots:

private:
    explicit database(QObject *parent = nullptr);
    static database *m_userDb;
};

#endif // DATABASE_H
