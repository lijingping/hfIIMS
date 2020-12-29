#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>

class database : public QObject
{
    Q_OBJECT
public:
    static database *getInstance();
    virtual ~database();

    bool addRegiserUser(const QString &username,const QString &password,const  QString &phone);
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
