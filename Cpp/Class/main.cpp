#include <iostream>
#include <string>

using namespace std;

int x;
class Lophoc
{
    public:
        void SetName(string TenGi)
        {
            name = TenGi;
            ok();
        }
        string GetName()
        {
            return(name);

        }

        int x = 10;
    private:
        string name;
        void ok()
        {
            cout << "ok" << endl;
        }
};

int main()
{
    Lophoc Lophoc1;
    Lophoc1.SetName("Le Quang Linh");

    cout << Lophoc1.GetName() <<endl;
    cout << Lophoc1.x <<endl;
    return 0;
}

// class Lophoc
// {
//     public:
//         int variable;
//         void function1();

//     private:
//         int private_variable;
//         void private_function();
// };

