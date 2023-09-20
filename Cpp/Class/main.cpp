#include <iostream>
using namespace std;

class test
{
    public:
    test()
    {
        cout << "hello\n";
    }
};

void testObject(test ob)
{
    cout << &ob << endl;
}

void testpObject(test* pob)
{
    cout << &pob << endl;
}

test getObject()
{
    test ob1;
    return ob1;
}

test* getpObject()
{
    test* ob1;
    return ob1;
}

int main()
{
    test ob = getObject();
    cout << &ob << endl;
    testObject(ob);

    test *pob = getpObject();
    //cout << pob << endl;
    testpObject(pob);

    return 0;
}
