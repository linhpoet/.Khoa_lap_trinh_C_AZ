#include <QCoreApplication>
#include <QDebug>

class Human
{
public:
    Human()         { qInfo() << "Hello"; }
    Human(int age) { qInfo() << age; }
    //explicit Human(int age) { qInfo() << age; }
    void GetAge() {qInfo() << this->age;}
private:
    int age;
    QString name;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Human h1;

    /*implicit conversion*/
    Human h2 = 10;                  //10 is parameter of constructor

    /*not implicit conversion - khong bị anh huong boi explicit keyword*/
    Human h3(15);                   //15 is parameter of constructor

    h3.GetAge();
    return a.exec();
}
