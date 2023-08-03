#include <iostream>
#include <string>
using namespace std;

int main()
{

    float x,y;
    float z = x + y;
    cout << "nhap x, y \n" ;
    cin.ignore(3);
    cin >> x  >> y ;
    cout << "x = " << x << "\ny =" << y << "\nz = "<< x+y ;

    cout << "\nnhap ten: " ;
    string ten;
    //fflush(stdin);              // xoa 'enter' nhap nhap vao luc nhap x,y
    cin.ignore(2);              //xóa 2 kí tự đã nhập dư vào lúc nhập x,y
    getline (cin, ten);         //gan chuoi vao bien ten
    cout << "xin chao " ;
    cout <<ten;
    return 0;
}
