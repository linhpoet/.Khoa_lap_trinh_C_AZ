#include <iostream>

using namespace std;

class Class1
{
    public:
        Class1(int x) { this->value = x;}          //constructor
        Class1(Class1 const &old_object)
        {
            this->value = old_object.value + 100;  //copy constructor
        }
        int value;
};

int main()
{
    Class1 object1(100);
    Class1 object2 = object1;                       //call copy constructor
    //Class1 object2(object1);
    cout <<"object1->value = "<<object1.value<<endl;
    cout <<"object2->value = "<<object2.value<<endl;

    return 0;
}
