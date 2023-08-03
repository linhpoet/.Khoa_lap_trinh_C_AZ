#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> pho;
    cout <<"pho : size"<<pho.size()<<"\t capacity = "<<pho.capacity() <<endl;
    for(int i=0; i<24; i++)
    {
        pho.push_back(i);
        cout <<"pho: value="<<pho.at(i) << "\tsize = "<<pho.size()<<"\t capacity = "<<pho.capacity() <<endl;
    }

    /*  hàm resize(): thay đổi kích thước của vector*/
    cout<<"dung ressize()"<<endl;
    pho.resize(30);
    for(int i=24; i<30; i++)
    {
        //pho.push_back(i);
        cout <<"pho :value="<<pho.at(i) << "\tsize = "<<pho.size()<<"\t capacity = "<<pho.capacity() <<endl;
    }

    pho.reserve(28);
    cout << "pho reserve 28" << endl;
    cout<< "capacity = " << pho.capacity()<< endl;

    pho.reserve(50);
    cout << "pho reserve 50" << endl;
    cout << "capacity = " << pho.capacity() <<endl;

    return 0;
}
