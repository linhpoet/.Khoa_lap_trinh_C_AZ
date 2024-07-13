#include <iostream>
#include "CongTy.h"

using namespace std;
int  test();

int main()
{
    CongTy* Bosch = new CongTy("Bosch", 2023);
    cout << Bosch->getName() <<endl;
    cout << Bosch->getYear() <<endl;
    delete Bosch;

    //CongTy FPT("FPT", 2025);
    //cout << FPT.getName() <<endl;
    //cout << FPT.getYear() <<endl;

    cout << test();
    cout <<"\nreturn main\n";
    return 0;
}
CongTy FPT("FPT", 2025);
int test()
{

    cout << FPT.getName() <<endl;
    cout << FPT.getYear() <<endl;

    cout << "return\n";
    return 100;
}
