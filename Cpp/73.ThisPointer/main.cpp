#include <iostream>

using namespace std;

class HinhCN
{
public:
    HinhCN(){};
    HinhCN(int chieudai, int chieurong)
    {
        this->chieudai = chieudai;          //phan biet 2 chieudai
        this->chieurong = chieurong;
    }
    void TinhHinhCN()
    {
        cout <<"chieu dai = "<<chieudai <<"\n" <<"chieu rong = "<< chieurong << endl;
    }
private:
    int chieudai, chieurong;
};
HinhCN hcn1;                //cac bien nhan gia tri 0-global
int main()
{
    hcn1.TinhHinhCN();

    HinhCN hcn2;            //cac bien nhan gia tri bat ki-local
    hcn2.TinhHinhCN();

    HinhCN hcn3(5,4);            //cac bien nhan gia tri bat ki-local
    hcn3.TinhHinhCN();
    return 0;
}
