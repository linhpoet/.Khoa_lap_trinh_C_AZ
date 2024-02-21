
#include <stdio.h>

int main()
{
    int &p = a;
    cout << &p << endl << &a;
    return 0;
}
