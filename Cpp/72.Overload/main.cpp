#include <iostream>

using namespace std;
class ChuoiCha
{
public:
    void KichThuoc() {cout << "To\n";}

    virtual void HuongVi() = 0;
};

class ChuoiCon: public ChuoiCha
{
    public:
    void KichThuoc() {cout << "Nho\n";}     //override
    void HuongVi(){cout <<"Chat\n";}          //redefine
};

int main(void) {

}
