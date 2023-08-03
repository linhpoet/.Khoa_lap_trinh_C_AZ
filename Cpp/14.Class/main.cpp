#include <iostream>
#include <string>

using namespace std;

class Sinhvien
{
private:
    int msv;
    string tenSV;
public:
    void nhapten()
    {
        cout<<"nhap msv"<<endl;
        cin >> msv ;
    }
    string xuatten()                // return ve string nen khai bao ham voi kieu string
    {
        if (msv == 10) tenSV="Le quang linh";
        return tenSV;
    }
};


int main()
{
    Sinhvien Linh;
    Linh.nhapten();
    cout<<Linh.xuatten() << endl;

    return 0;
}
