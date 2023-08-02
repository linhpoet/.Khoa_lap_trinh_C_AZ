#include <iostream>

using namespace std;

class Lophoclaptrinh
{
public:

    void LophocCplusplus()
    {
        cout << "c++\n";
    }

    void setname(string tenGi)
    {
        name = tenGi;
    }

    string getname()
    {
        return name;
    }
protected:
private:
    string name;
};
int ngay = 26;
int bien;
int main()
{
    cout << "hello world\n";
    Lophoclaptrinh LophocObject1;
    Lophoclaptrinh LophocObject2;
    LophocObject1.LophocCplusplus();
    LophocObject2.LophocCplusplus();

    LophocObject1.setname("lop hoc c ++");
    cout << LophocObject1.getname() << endl;

    return(0);
}
