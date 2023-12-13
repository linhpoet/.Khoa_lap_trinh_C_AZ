#include <iostream>

using namespace std;

namespace first_space
{

    void func()
    {
        cout << "ben trong first space\n";
    }

}

namespace second_space
{
    int a = 1;
    void func()
    {
        cout << "ben trong second space\n";
    }

}
using namespace second_space;
namespace third_space
{
    void func()
    {
        cout << "ben trong namespace 3\n";
    }
    namespace fourth_namespace
    {
        int a=1;
        void func()
        {
            cout <<"ben trong namespace 4\n";
        }

    }
}
using namespace third_space;
//using namespace third_space::fourth_namespace;
int main()
{

    first_space::func();
    //a = 19;
    //func();
    fourth_namespace::func();           //can co : using namespace third_space;
    cout<<"co the use multiple namespace trong cung 1 chuong trinh";
    return 0;
}
