#include <iostream>

using namespace std;

class PhongTom
{
public:
    virtual void Skill_1() {cout << "base skill 1\n";};
    virtual void Skill_2() = 0;
    void Skill_3() {cout << "base skill 3\n";};
    void Skill_4() {cout << "base skill 4: ke thua\n";};
};

class CungThu: public PhongTom
{
public:
    void Skill_1() {cout << "derived skill 1\n";};
    void Skill_2() {cout << "derived skill 2\n";};
    void Skill_3() {cout << "derived skill 3\n";};
};

int main()
{
    PhongTom *pt;
    CungThu ct;
    pt = &ct;
    pt->Skill_1();      //virtual function
    pt->Skill_2();      //pure virtual
    pt->Skill_3();      // pt: kieu baseClass

    cout << endl;
    ct.Skill_3();       //override
    ct.Skill_4();       //ct ke thua Skill_4()

    PhongTom *pt3 = new PhongTom;
    //pt3->Skill_2();
    return 0;
}
