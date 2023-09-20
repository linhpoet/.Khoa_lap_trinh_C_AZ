#include <QCoreApplication>

int main()
{
    QString *ptr = new QString("hello");
    //int var = 10;
    //ptr = &var;

    //qInfo() << &var;
    qInfo() << ptr;
    qInfo() << &ptr;
    qInfo() << *ptr;
    qInfo() << (QString*)(0x1b66d9e1520);

    return 0;
}
