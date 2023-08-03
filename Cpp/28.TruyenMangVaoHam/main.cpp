#include <iostream>

using namespace std;

InMang(int *mang1chieu)         // InMang ( int mang1chieu[]);      giống nhau
{
    for(int i = 0; i < 5; i++) cout<< mang1chieu[i] << endl;
}

int main()
{
    int mang1chieu[5] = {2,4,5,6,7};
    InMang(mang1chieu);
    cout << "Hello world!" << endl;
    return 0;
}
