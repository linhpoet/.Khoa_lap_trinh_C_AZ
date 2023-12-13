#include <iostream>

using namespace std;

template <typename T>
T Max(T a, T b)
{
    if(a > b) return a; else return b;

}

int main()
{
    int a1 = 10;
    int b1 = 20;
    cout << "Max(a1,b1) = " << Max<int>(a1, b1) << endl;
    cout << "Max(a1,b1) = " << Max(a1, b1) << endl;

    float a2 = 30.123125;
    float b2 = 10.7;
    cout << "Max(a2,b2) = " << Max<float>(a2,b2) << endl;
    cout << "Max(a2,b2) = " << Max(a2,b2) << endl;
    return 0;
}
