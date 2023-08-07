#include "CongTy.h"
#include <iostream>
using namespace std;

CongTy::CongTy(string name1, int year1)
{
    cout << "CONSTRUCTOR" << endl << endl;
    name = name1;
    year = year1;
}

string CongTy::getName()
{
    return name;
}
int CongTy::getYear()
{
    return year;
}

CongTy::~CongTy()
{
    cout << "\nDESTRUCTOR" << endl;
}
