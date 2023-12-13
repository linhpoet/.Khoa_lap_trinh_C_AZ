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

class bareclass
{
protected:
    void barehello()
    {
        cout <<"hello";
    }

};

class deriveclass : protected bareclass
{
public:
    void hello()
    {
        barehello();
    }
protected:
    void derivehello()
    {
        barehello();
    }
};

class secondderiveclass : protected deriveclass
{
public:

    void hello()
    {
        barehello();
    }
};

int const globalvar1=10;

int main()
{
    const int const_val = 10;
    int *ptr_to_const = &const_val;

    printf("Value of constant is %d",const_val);
    *ptr_to_const = 20;
    printf("Value of constant is %d",const_val);


    const int localvar1=10;
    int *pvar1 = &localvar1;
    *pvar1 = 11;
    cout << localvar1 << endl;
    pvar1 = &globalvar1;
    cout << globalvar1 << endl;
    Sinhvien Linh;
    Linh.inthongtin();

    deriveclass derive;
    derive.hello();
    secondderiveclass seconderive;
    seconderive.hello();

    cout << "Hello world!" << endl;
    return 0;
}
