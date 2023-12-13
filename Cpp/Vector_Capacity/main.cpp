#include <iostream>
#include <vector>
using namespace std;

int x;
x = 10;
int main()
{

    static int stx;
    stx = 10;
    cout << stx << endl;
    vector<int> pho;
    //capacity của vector
    cout << "ban dau:" << "\tsize = " << pho.size() << "\tcapacity = " << pho.capacity() << endl;
    for(int i=0; i<24; ++i)
    {
        pho.push_back(i);
        cout << "pho[" << i << "]=" << pho[i] << "\tsize = " << pho.size() << "\tcapacity = " << pho.capacity() << endl;

    }
    for(int i=pho.size(); i<pho.capacity(); ++i)
    {
        cout << "pho[" << i <<"]=" << pho[i] << endl;
    }


    pho.resize(30);
    cout << "pho.size = "<< pho.size() << endl;
    for(int i=0; i<pho.capacity(); ++i)
    {
        cout << "pho[" << i << "]=" << pho[i] << "\tsize = " << pho.size() << "\tcapacity = " << pho.capacity() << endl;
    }

    pho.reserve(30);
    cout <<"capacity = " << pho.capacity() << endl;
    pho.reserve(34);
    cout <<"capacity = " << pho.capacity() << endl;

    pho.push_back(123);
    pho.push_back(345);
    pho.push_back(567);
    pho.push_back(789);
    pho.push_back(123);
    pho.push_back(345);
    pho.push_back(567);
    pho.push_back(789);
    pho.push_back(123);
    pho.push_back(345);
    pho.push_back(567);
    pho.push_back(789);
    pho.push_back(123);
    pho.push_back(345);
    pho.push_back(567);
    pho.push_back(789);
    for(int i=0; i<pho.capacity(); ++i)
    {
        cout << "pho[" << i << "]=" << pho[i] << "\tsize = " << pho.size() << "\tcapacity = " << pho.capacity() << endl;
    }
    cout <<"capacity = " << pho.capacity() << endl;

    return 0;
}
