#include <iostream>

using namespace std;

int *p = new int[5];

int main()
{

    for(int i=0; i<5; i++) cout << *(p+i) << endl;
}
