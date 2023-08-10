#include <iostream>

using namespace std;

class PhongTom
{
public:
    virtual void Skill_1() = 0;         //pure virtual
    virtual void Skill_2(){cout << "1 dam \n";}
};

class CungThu: public PhongTom
{
public:
    void Skill_1(){cout << "Ban cung\n";}
};

class GayThu: public PhongTom
{
public:
    void Skill_2() { cout <<"danh gay\n";}
};
int main()
{
    //PhongTom pt;                  //abtract class cannot declare variable
    //PhongTom *pt = new PhongTom;  //cannot
    PhongTom *pt;
    CungThu ct;
    pt = &ct;
    pt->Skill_1();
    pt->Skill_2();


    return 0;
}
