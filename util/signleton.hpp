//
// Created by 29019 on 2019/12/17.
//

#ifndef GENERAL_SIGNLETON_H
#define GENERAL_SIGNLETON_H

#include <memory>
#include <vector>

using namespace std;
template <typename T> class Singletone
{
public:
    static T* Instance(){
        if(mInstance.get() == nullptr){
            mInstance = std::unique_ptr<T>(new T);
        }
        return mInstance.get();
    }
private:
    Singletone<T>(){}
    ~Singletone<T>(){}
    Singletone &operator=(const Singletone&){}
    static unique_ptr<T> mInstance;
};
template <typename T>
unique_ptr<T> Singletone<T>::mInstance;

#define  DECLARE_SINGLETON(type) \
    friend class unique_ptr<type> ; \
    friend class Singletone<type> ;

#endif //GENERAL_SIGNLETON_H
