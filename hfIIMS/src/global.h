#ifndef GLOBAL_H
#define GLOBAL_H
#include <QIcon>
#include "util/signleton.hpp"

typedef  class CIConMnagager{
public:
    CIConMnagager();
    QIcon GetIcon(QString);
    QIcon GetIconHighDpi(QString);
    QIcon GetIconLowDpi(QString);
    QIcon GetIconMiddleDpi(QString);

private:
    map<QString,QIcon> gPublicIconMap;
}IConMnagager;

typedef Singletone<CIConMnagager> gIconManager;

class global
{
public:
    global();
};

#endif // GLOBAL_H
