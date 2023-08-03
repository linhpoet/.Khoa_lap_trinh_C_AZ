#include <iostream>
#include <string>

using namespace std;

class Sinhvien
{
private:
    int msv;
    string ten;
public:
    Sinhvien()                          //constructor-ham dựng: ten ham giong ten class
    {
        cout<<"ham dung"<< endl;
    ten = "lequanglinh";
    }
public:
    void setName(string tenGi)
    {
        ten = tenGi;
    }
    string getName()                // return ve string nen khai bao ham voi kieu string
    {
        return ten;
    }
};


int main()
{

    Sinhvien Linh;                      // hàm Sinhvien() được chạy ngay khi mới tạo ra

    cout <<Linh.getName() << endl;    //chưa gán giá trị cho biến 'ten'
    Linh.setName("Le Quang Linh");        //gán giá trị cho biến ten
    cout<<Linh.getName() << endl;

    return 0;
}
