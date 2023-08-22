#include <QCoreApplication>
#include <QDebug>

class StaticFC : QObject
{
    public:
        static int objectCount;     // static data member is declared
        StaticFC()
        {
            qInfo() << this << "constructor";
            objectCount++;
        }

    public:

        void doStuff()
        {
            qInfo() << this << "do stuff";
        }

        static void doOtherStuff()
        {
            //'this' cannot be used in static function
            //qInfo() << this << "do other stuff";
            qInfo() << "do other stuff";
        }
};
int StaticFC::objectCount = 0;      // static data member is defined

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    StaticFC t;
    t.doStuff();
    t.doOtherStuff();

    qInfo() << "\n";
    StaticFC::doOtherStuff();

    return a.exec();
}
