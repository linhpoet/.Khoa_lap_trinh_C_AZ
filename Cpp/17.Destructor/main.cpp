#include <iostream>
#include "CongTy.h"

using namespace std;
int  test();

int main()
{
    CongTy FPT("FPT", 2025);
    cout << FPT.getName() <<endl;
    cout << FPT.getYear() <<endl;
    cout << "before return" << endl;

    //cout << test();
    return 0;
}

int test()
{
    CongTy FPT("FPT", 2025);
    cout << FPT.getName() <<endl;
    cout << FPT.getYear() <<endl;

    cout << "return";
    return 100;
}
