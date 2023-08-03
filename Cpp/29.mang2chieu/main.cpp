#include <iostream>

using namespace std;

int main()
{
    int mang2chieu[2][3] = { {1,3,5}, {2,4,6} };           // mang2chieu[2][3] là    2 mang1chieu[3]

    int mang2chieu2[3][3] = { {1,3,5}, {2,4,6}, {0,5,10} };  //mang2chieu[3][3] là     3 mang1chieu[3]

    for (int hang = 0; hang < 2; hang++) {
        for (int cot = 0; cot < 3; cot++) {
            cout << mang2chieu[hang][cot] << "  ";
        }
        cout << endl ;
    }
}



