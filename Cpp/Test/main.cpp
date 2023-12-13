#include <iostream>

using namespace std;

int main()
{
    const int const_val = 10;
    int *ptr_to_const = &const_val;
    printf("Value of constant is %d\n",const_val);
    *ptr_to_const = 20;
    printf("Value of constant is %d",const_val);
    return 0;
}
