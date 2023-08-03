#include <iostream>

using namespace std;

struct sinhvien {
    char msv[20];
    char ten[20];
    char lop[8];
    int tuoi;
};

void nhap1SV(sinhvien &sv)
{
    cout<<"msv: ";
    gets(sv.msv);
    cout<<"ten: ";
    fflush(stdin);
    gets(sv.ten);
    cout<<"lop : ";
    fflush(stdin);
    gets(sv.lop);
    cout<<"tuoi: ";
    cin>> sv.tuoi ;
}

void xuat1SV(sinhvien sv){
    cout<<sv.msv << endl;
    cout<<sv.ten << endl;
    cout<<sv.lop << endl;
    cout<<sv.tuoi << endl;
}
int main()
{
    sinhvien(x);
    cout<< sizeof(sinhvien) << endl;
    cout << "Hello world!" << endl;
    return 0;
}
