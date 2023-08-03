#include <iostream>

using namespace std;

int main()
{
    int mang1chieu[3] = {2,4,6};
    int * ptr = 0;                      //trỏ về NULL(trỏ về 0)
    ptr = mang1chieu;                   //ptr = *mang1chieu[0];      2 câu lệnh tương đương nhau, không cần dấu & khi gán địa chỉ của mảng vào con trỏ

    cout << *ptr <<"\t" << (int)    ptr <<endl;
    cout << mang1chieu[0] << "\t" << &mang1chieu[0] << endl;
    cout << *ptr << "\t" << &mang1chieu << endl;                //địa chỉ của mảng trùng với địa chỉ giá trị thứ 0 của mảng:    &mang1chieu = &mang1chieu[0] = ptr

    cout << "Hello world!" << endl;
    return 0;
}
