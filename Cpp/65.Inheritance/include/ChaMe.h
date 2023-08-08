#ifndef CHAME_H
#define CHAME_H
#include <iostream>
//base class
class ChaMe
{
    public:
        ChaMe();
        virtual ~ChaMe();
        void XinChao();

    protected:
        void protectedHello()
        {
            std::cout << "chame protected hello\n";
        }
    private:
};

#endif // CHAME_H
