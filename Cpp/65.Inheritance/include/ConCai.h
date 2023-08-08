#ifndef CONCAI_H
#define CONCAI_H
#include "ChaMe.h"
#include <iostream>
//derived class
class ConCai: public ChaMe
{
    public:
        ConCai();
        virtual ~ConCai();
        void ConcaiXinChao();
        void callProtectedfromBase()
        {
            protectedHello();
        }
    protected:

    private:
};

#endif // CONCAI_H
