#include <iostream>
#include <string>

using namespace std;

class LophocLaptrinh
{
    public:
        LophocLaptrinh()        //ten ham dung giống tên class
        {
            cout <<"ham dung khong tham so" << endl;
        }

        LophocLaptrinh(string TenGi)        //ten ham dung giống tên class
        {
            cout <<TenGi<< endl;
        }
    private:
        string name;
        int x = 12312;
    public:
        void SetName(string TenGi)
        {
            name = TenGi;
        }
        int y = x;
        string GetName()
        {
            return name;
        }

};
int main()
{
    LophocLaptrinh Lophoc1;
    LophocLaptrinh Lophoc2("ham dung CO tham so");

    Lophoc1.SetName("Linh A");
    cout << Lophoc1.GetName() << endl;
    cout << Lophoc1.y;

    return 0;
}
