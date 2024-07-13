#include <iostream>


using namespace std;
class staticdemo2
{
    public:
    static int public_static_var2;
};
class staticdemo
{
public:
    int nonstatic_var;
    static int public_static_var;
    int get()
    {
        cout << public_static_var;
        cout << private_static_var;
        cout << public_static_var2;
    }

    static int staticfc()
    {
        cout << public_static_var << endl;
        cout << private_static_var << endl;
        cout << public_static_var2 << endl;
        //cout << nonstatic_var << endl;        //static mem function cannot acces non static member.

    }
private:
    static int private_static_var;
};




int staticdemo::public_static_var;
int staticdemo::private_static_var;
int main()
{

    staticdemo c1;
    c1.get();
    cout <<"\nhello\n";
    c1.staticfc();
    return 0;
}
