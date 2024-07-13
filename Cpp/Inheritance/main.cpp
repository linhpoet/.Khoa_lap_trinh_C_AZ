#include <iostream>
#include <string>

using namespace std;

class People
{
    string name;
    int old;
    public:
    People(string name, int old)
    {
        this->name = name;
        this->old = old;
    }
    void print()
    {
        cout <<"name : "<<name<<"\t old : "<<old <<endl;
    }
};

class Student : public People
{
    int mssv;
    public:
    Student(string name, int old, int mssv) : People(name, old)
    {
        this->mssv = mssv;
    }
    void print()
    {
        cout <<"mssv:" <<mssv<<endl;
    }
};


int main()
{
    Student x1("Linh", 24, 123);
    x1.print();
    return 0;
}
