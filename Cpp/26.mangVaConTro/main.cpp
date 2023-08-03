#include <iostream>

using namespace std;

int main()
{
    int mang1chieu[3] = {2,4,6};
    int * ptr = 0;                      //trỏ về NULL(trỏ về 0)
    ptr = mang1chieu;                   //ptr = *mang1chieu[0];      2 câu lệnh tương đương nhau, không cần dấu & khi gán địa chỉ của mảng vào con trỏ

    cout << *ptr <<"\t" << ptr << endl;
    cout << mang1chieu[0] << "\t" << &mang1chieu[0] << endl << endl;

    ptr++ ;                                                     //tăng con trỏ lên 1, nghĩa là con trỏ sẽ trỏ tới 1 địa chỉ lớn hơn địa chỉ cũ, ở đây vì mảng kiểu int(4 byte) nên ĐIA_CHỈ_MỚI = ĐỊA_CHỈ_CŨ + 4 byte = &mang1chieu[1] (địa chỉ của giá trị thứ 1 trong mảng)
    cout << *ptr <<"\t"<< ptr << endl;
    cout << mang1chieu[1]<<"\t"<< &mang1chieu[1]<<endl;

    cout << "Hello world!" << endl;
    return 0;
}
