#include <iostream>
#include <string>

using namespace std;

int x;
class Lophoc
{
    public:
        void SetName(string TenGi)
        {
            nameInPrivate = TenGi;
            fcInPrivate();
        }
        string GetName()
        {
            return(nameInPrivate);

        }

        int x = 10;
    private:
        string nameInPrivate;
        void fcInPrivate()
        {
            cout << "object in private is called in public" << endl;
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

