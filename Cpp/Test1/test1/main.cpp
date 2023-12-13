#include <iostream>

using namespace std;

void swapp(int *a, int *b);

struct abc
{
    void say()
    {
        cout << "hello";
    }
};
#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int &r = a;
    cout << a << r;
    r = 10;
    cout << a << r;
}

void swapp(int *a, int* b)
{
    int temp = *a;
    *a = *b;
    *b =temp;
}
