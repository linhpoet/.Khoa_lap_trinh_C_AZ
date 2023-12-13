#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//Create three classes Person, Professor and Student.
//The class Person should have data members name and age.
//The classes Professor and Student should inherit from the class Person.

class Person
{
public:
    virtual void getdata() {};
    virtual void putdata() {};
protected:
    string name;
    int age;
};

//The class Professor should have two integer members: publications and cur_id.
//There will be two member functions: getdata and putdata.
//The function getdata should get the input from the user: the name, age and publications of the professor.
//The function putdata should print the name, age, publications and the cur_id of the professor.

class Professor : public Person
{
public:
    Professor()
    {
        static_cur_id++;
        cur_id = static_cur_id;
    }
private:
    int cur_id;
    int publications;
public:
    static int static_cur_id;
    void getdata()
    {
        cin >> name;
        cin >> age;
        cin >> publications;
    }

    void putdata()
    {

        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }

};
//The class Student should have two data members: marks, which is an array of size  and cur_id.
//It has two member functions: getdata and putdata.
//The function getdata should get the input from the user: the name, age, and the marks of the student in  subjects.
//The function putdata should print the name, age, sum of the marks and the cur_id of the student.
class Student : public Person
{
public:
    Student()
    {
        static_cur_id++;
        cur_id = static_cur_id;
    }
private:
    int cur_id;
    int marks[6] = {};
public:
    static int static_cur_id;
    void getdata()
    {
        cin >> name;
        cin >> age;
        for(int i=0; i<6; ++i)
        {
            cin >> marks[i];
        }
    }

    void putdata()
    {

        int sum_mark = 0;
        for(int i=0; i<6;  ++i)
        {
            sum_mark += marks[i];
        }
        cout << name << " " << age << " " << sum_mark << " " << cur_id << endl;
    }
};
//int Professor::static_cur_id = 0;
//int Student::static_cur_id = 0;
int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
