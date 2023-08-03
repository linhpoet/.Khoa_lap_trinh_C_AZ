#include <iostream>

using namespace std;

/*  abstraction class   */
class PhongTom
{
public:
    virtual void skill1() = 0;  //pure virtual : ham thuan ao
    virtual void skill2()
    {
        cout <<"dam phat chet luon\n";
    }
};

class CungThu : public PhongTom
{
public:
    void skill1()
    {
        cout<< "toan hut\n";
    }
};

class GayThu : public PhongTom
{
public:
    void skill1()
    {
        cout<< "toan hut\n";
    }
};

int main()
{
    PhongTom *nvgame;
    CungThu cungthu;
    GayThu gaythu;
    nvgame = &cungthu;

    nvgame->skill1();
    nvgame->skill2();
    return 0;
}
