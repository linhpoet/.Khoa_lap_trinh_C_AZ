#include <iostream>

using namespace std;

class base
{
    public:
    //~base(){ cout <<"delete base object\n"; }   // normal destructor

    virtual ~base(){ cout <<"delete base object\n"; }   //virtual destructor -derive constructor
                                                        //is called first, and then base destructor is call
                                                        
    //virtual ~base() = 0;    //pure virtual destructor
};
class derive : public base
{
    public:
    ~derive(){ cout <<"delete derive object\n"; }
};

int main()
{
    base *b1 = new derive;
    delete b1;
    return 0;

}