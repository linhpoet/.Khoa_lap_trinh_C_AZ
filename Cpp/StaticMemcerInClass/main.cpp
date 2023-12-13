#include <iostream>


using namespace std;

class staticdemo
{
public:
    static int public_static_var;
    int get()
    {
        cout << public_static_var;
        cout << private_static_var;
    }
private:
    static int private_static_var;
};


x
int staticdemo::public_static_var;
int staticdemo::private_static_var;
int main()
{

    staticdemo c1;
    c1.get();
    cout <<"\nhello";
    return 0;
}
