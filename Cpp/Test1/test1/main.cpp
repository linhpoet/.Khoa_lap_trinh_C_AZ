#include <iostream>

using namespace std;

void swapp(int *a, int *b);

int main()
{
    int a= 10;
    int b=15;
    cout << a <<"\t"<< b<<endl;
    swapp(&a,&b);
    cout << a <<"\t" <<b<<endl;
    return 0;
}

void swapp(int *a, int* b)
{
    int temp = *a;
    *a = *b;
    *b =temp;
}
