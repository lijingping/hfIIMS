#include "global.h"

global::global()
{

}


CIConMnagager::CIConMnagager()
{
    gPublicIconMap.insert(pair<QString,QIcon>(QString("tree_key"),QIcon(":/res/img/logo.svg")));
}

QIcon CIConMnagager::GetIcon(QString key)
{
    if(this->gPublicIconMap.find(key) != this->gPublicIconMap.end()){
        return gPublicIconMap[key];
    }else{
        return gPublicIconMap["missing"];
    }
}

QIcon CIConMnagager::GetIconHighDpi(QString key)
{
    if(this->gPublicIconMap.find(key) != this->gPublicIconMap.end()){
        return gPublicIconMap[key];
    }else{
        return gPublicIconMap["missing"];
    }
}

QIcon CIConMnagager::GetIconLowDpi(QString key)
{
    if(this->gPublicIconMap.find(key) != this->gPublicIconMap.end()){
        return gPublicIconMap[key];
    }else{
        return gPublicIconMap["missing"];
    }
}

QIcon CIConMnagager::GetIconMiddleDpi(QString key)
{
    if(this->gPublicIconMap.find(key) != this->gPublicIconMap.end()){
        return gPublicIconMap[key];
    }else{
        return gPublicIconMap["missing"];
    }
}



