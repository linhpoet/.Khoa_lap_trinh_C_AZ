#include <iostream>
#include <string>

using namespace std;

class LophocLaptrinh
{
    public:
        LophocLaptrinh()        //ten ham dung giống tên class
        {
            cout <<"ham dung - constructor" << endl;
        }

        LophocLaptrinh(string TenGi)        //ten ham dung giống tên class
        {
            cout <<TenGi<< endl;
        }
    public:
        void SetName(string TenGi)
        {
            name = TenGi;
        }
        string GetName()
        {
            return name;
        }
    private:
        string name;
};
int main()
{
    LophocLaptrinh Lophoc1;

    LophocLaptrinh Lophoc2("ham dung - Le Quang Linh");

    return 0;
}
