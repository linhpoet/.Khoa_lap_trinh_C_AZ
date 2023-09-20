#include <QCoreApplication>

void Test(QObject ob)       //copy - tham tri
{
    qInfo() << &ob << Q_FUNC_INFO;
}

void TestPtr(QObject *ob)
{
    qInfo() << ob << Q_FUNC_INFO;
}

/*  Cannot copy an object   */
//QObject getObject()
//{
//    QObject ob1;
//    return ob1;     //copy
//}

QObject* getpObject()
{
    QObject *ob1 = new QObject();
    return ob1;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QObject ob;
    QObject *p = getpObject();
//    Test(ob);
    TestPtr(&ob);
    TestPtr(p);

    delete p;
    return a.exec();
}
