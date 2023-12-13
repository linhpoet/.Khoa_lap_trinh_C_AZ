#include <iostream>
using namespace std;

class PhongTom
{
public:
    virtual void SkillCoBan(){cout << "lv < 10: skill co ban: dam thuong" <<endl;}
};

class CungThu: public PhongTom
{
public:
    void SkillCoBan()
    {
        cout<<"lv > 10: skill co ban: ban cung"<<endl;
    }
};

class GayThu: public PhongTom
{
public:
    void SkillCoBan() override
    {
        cout <<"lv > 10: skill co ban: danh gay"<<endl;
    }
};

void TungChieu(PhongTom *pnvgame, int level);
bool isCungThu = false;
int main()
{
    PhongTom *nvgame = new PhongTom;
    int level = 1;
    TungChieu(nvgame, level);

    /*a long time later*/
    level = 11;
    isCungThu = true;
    TungChieu(nvgame, level);

    CungThu *cungthu1 = new CungThu;
    cungthu1->SkillCoBan();

    return 0;
}

void TungChieu(PhongTom *pnvgame, int level)
{

    if(level <= 10)
    {
        pnvgame->SkillCoBan();
    }

    else if(level >10)
    {
        if(isCungThu == true)
        {
            delete pnvgame;
            PhongTom *pnvgame = new CungThu;
        }

        pnvgame->SkillCoBan();
    }
}
