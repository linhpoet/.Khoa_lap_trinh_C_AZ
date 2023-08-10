#include <iostream>

using namespace std;

class PhongTom                      //base class
{
public:
    virtual void SkillCoBan()
    {
        cout <<"dam thuong"<<endl;
    }
    int dam;
};

class CungThu: public PhongTom      //derived class
{
public:
    void SkillCoBan()
    {
         cout <<"ban cung"<<endl;
    }
    int cung;
};

class GayThu: public PhongTom
{
public:
    void SkillCoBan()
    {
        cout << "danh gay" << endl;
    }
};
int main()
{
    PhongTom *pt1 = new PhongTom;
    pt1->SkillCoBan();
    PhongTom *pt2 = new CungThu;      //cấp phát ô nhớ kiểu CungThu gán vào con trỏ *pt2 kiểu PhongTom
    pt2->SkillCoBan();

    /*Tuong tu nhu tren nhung khong phai la cap phat bo nho*/
    PhongTom *pt3;
    GayThu gaythu;
    pt3 = &gaythu;
    pt3->SkillCoBan();
    return 0;
}
