#include <iostream>

using namespace std;

int sum(int a, int b)
{
    return a+b;
}

int sum(int a, int b, int c)
{
    return a+b+c;
}

int sum(int a, int* b)
{
    return a+*b;
}
int main(void) {
    cout <<sum(1,2);
    cout <<sum(1,2,3);
    int b=10;
    cout << sum(1, &b);
}
