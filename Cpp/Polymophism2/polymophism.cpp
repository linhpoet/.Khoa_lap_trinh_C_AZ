#include <iostream>
using namespace std;

class baseclass
{
    public:
    virtual void draw(){ cout <<"base class"<<endl; }
};
class circle : public baseclass
{
    public:
    void draw() { cout <<"circle\n";}
};
class retangle : public baseclass
{
    void draw() { cout <<"retangle\n";}
};
void draw(baseclass* base)
{
    base->draw();
}
int main()
{
    baseclass b1;
    circle c1;
    retangle r1;
    draw(&c1);
    return 0;
}