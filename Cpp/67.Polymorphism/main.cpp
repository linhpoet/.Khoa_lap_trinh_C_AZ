#include <iostream>

using namespace std;

class PhongTom
{
public:
    void SkillCoBan()
    {
        cout <<"dam thuong"<<endl;
    }
};

class CungThu: public PhongTom
{
public:
    void SkillCoBan()
    {
         cout <<"ban cung"<<endl;
    }
};

int main()
{
    PhongTom *pt1 = new PhongTom();
    pt1->SkillCoBan();

    PhongTom *pt2 = new CungThu();
    pt2->SkillCoBan();
    return 0;
}
