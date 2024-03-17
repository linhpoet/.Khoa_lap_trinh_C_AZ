#include <iostream>
#include <QDebug>

using namespace std;
int main()
{
    int a;
    cout <<"nhap:";
    cin >> a;
    cout <<a << endl;


    qInfo() << "information";
    qDebug() << "Debug";
    qCritical() << "Critical";
    //qFatal("Test Crash");

    return 0;
}
