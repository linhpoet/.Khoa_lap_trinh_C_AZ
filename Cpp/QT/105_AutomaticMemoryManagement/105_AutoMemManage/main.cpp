#include <QCoreApplication>
#include <QObject>
#include <QDebug>
class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test();
    ~Test();
    void doStuff();
};

Test::Test() {qInfo()<< this << "Constructor" ; }
Test::~Test(){qInfo()<< this << "Destructor" ; }
Test::doStuff() { qInfo() << this << Q_FUNC_INFO;}

void wow()
{
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qInfo() << "hello";
    wow();
    return 0;
}
