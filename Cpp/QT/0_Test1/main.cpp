#include <QCoreApplication>

class test : public QObject
{
    //When you have your class defined in .cpp file instead of .h file moc fails to process it properly.
    //the moc tool reads a C++ header file
    //if you have O_OBJECT in main.cpp, add #include "main.moc" at the end of the file:
    Q_OBJECT
public:
    void dostuff();
    static void doOtherStuff();
};

void test::dostuff()
{
    qInfo() << "do stuff" ;
}
test globalObject;
void test::doOtherStuff()
{
    qInfo() << "static fc do other stuff";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    test localObject;
    qInfo() << &localObject;
    qInfo() << &globalObject;
    test t;
    t.dostuff();
    t.doOtherStuff();

    test::doOtherStuff();

    return a.exec();
}
#include "main.moc"
