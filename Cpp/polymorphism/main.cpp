#include <iostream>

using namespace std;

class PhongTom
{
public:
    virtual void Skill1()
    {
        cout << "Phong tom: dam phat chet ngay" << endl;
    }

    virtual void Skill2()
    {
        cout << "Phong tom: cu dam nghiem tuc" << endl;
    }
};

class CungThu : public PhongTom
{
public:
    void Skill1()
    {
        cout <<"Cung: toan hut" << endl;
    }

    void Skill2()
    {
        cout <<"Cung: chua hoc"<<endl;
    }
};

class GayThu : public PhongTom
{
public:

    void Skill2()
    {
        cout <<"Gay: chua hoc"<<endl;
    }

};

int main()
{
    PhongTom *nhanvat_Game;
    GayThu gaythu;
    CungThu cungthu;
    nhanvat_Game = &cungthu;
    nhanvat_Game->Skill1();
    nhanvat_Game = &gaythu;
    nhanvat_Game->Skill1();
    return 0;
}
