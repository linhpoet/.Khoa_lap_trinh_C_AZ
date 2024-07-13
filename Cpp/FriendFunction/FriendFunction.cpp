#include <iostream>

using namespace std;
class HinhChuNhat
{
private:
    float chieudai, chieurong;
protected:
    friend float DienTich(HinhChuNhat H);
public:
    HinhChuNhat() {}
    HinhChuNhat(float chieudai, float chieurong)
    {
        this->chieudai = chieudai;
        this->chieurong = chieurong;
    }

    
};

float DienTich(HinhChuNhat H)
{
    return H.chieudai*H.chieurong;
}

int main()
{
    HinhChuNhat H(5,4);
    cout << DienTich(H);
    return 0;
}