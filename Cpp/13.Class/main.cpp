#include <iostream>
#include <string>

using namespace std;

class Sinhvien
{                         //dat ten class viet hoa chu cai dau
private:                  //riêng: những biến khai báo trong private chỉ có thể sử dụng trong 2 dấu {} của class
    string msv;
    string ten;
    int tuoi;
public:
    Sinhvien()
    {
        msv = "105110366";
        ten = "Le Quang Linh";
        tuoi = 20;

    }
    void noichuyen()
    {
        cout << "noi linh tinh " << endl;
    }
    void hocbai()
    {
        cout <<"doc sach"<< endl;
    }
    void inthongtin()
    {
        cout << ten<<"-"<<msv<<"-"<<tuoi << endl;
    }
};


int main()
{
    Sinhvien Linh;
    Linh.inthongtin();



    cout << "Hello world!" << endl;
    return 0;
}
