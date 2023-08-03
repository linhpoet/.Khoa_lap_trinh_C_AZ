#include <iostream>

using namespace std;

int main()
{
    int Banhmi = 999;

    cout <<"dia chi bien banhmi "<< &Banhmi << endl;          //in ra dia chi cua bien Banhmi, &Banhmi là ĐỊA CHỈ của biến Banhmi

    int * ptr = 0;                  // khai bao con tro, 1 lần là đủ
    ptr = &Banhmi;                  // con trỏ ptr trỏ tới địa chỉ ô banhmi
//    cout << (int)ptr << endl;

    //cout<<0x61fe14<<endl;
    cout <<*ptr<< endl;             //*ptr: lấy giá trị của ô mà con trỏ trỏ tới, ở đây là ô Banhmi
    cout <<"tro"<<*&Banhmi << endl; //*&banhmi = *ptr nghia la lấy giá trị của biến được gán vào (bien banhmi)
    cout <<Banhmi<< endl;           // câu lệnh này giống hoàn toàn câu lệnh trên, nghĩa là     *ptr = Banhmi

    *ptr = 333;                     // thay đổi giá trị của *ptr ( thay đổi giá trị của biến có địa chỉ mà con trỏ ptr trỏ tới)
    cout << Banhmi << endl;         // thay đổi *ptr thì cũng thay đổi cả giá trị biến Banhmi

    int diaChi;
    /* diaChi = (int)&Banhmi;        ép kiểu không thành công :V méo hiểu @@
    cout << diaChi<< endl;
    cout << "Hello world!" << endl; */
    return 0;
}
