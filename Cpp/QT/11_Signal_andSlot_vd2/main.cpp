#include <QCoreApplication>
#include <QObject>

class Source : public QObject
{
    Q_OBJECT
public:
    explicit Source(QObject *parent = nullptr) {}
    void test()
    {
        emit sendSignal("hello world");
    }
signals:
    void sendSignal(QString message);
};

class Destination : public QObject
{
    Q_OBJECT
public:
    explicit Destination(QObject *parent = nullptr) {}
signals:
public slots:
    void receivedSignal(QString message)\
    {
        qInfo() << "message 1:" << message;
    }
};

class secondDestination : public QObject
{
    Q_OBJECT
public slots:
    void receivedSignal(QString message)\
    {
        qInfo() << "message 2:" << message;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qInfo() << "hello world\n";

    Source oSource, o2Source;
    Destination oDestination;
    secondDestination o2Destination;

    /* 1 signal is connected with 2 slot */
    QObject::connect(&oSource,&Source::sendSignal, &o2Destination, &secondDestination::receivedSignal);
    QObject::connect(&oSource, &Source::sendSignal, &oDestination, &Destination::receivedSignal);


    oSource.test();
    //o2Source.test();        //o2Source have not be connected
    //oDestination.receivedSignal("called");
    return a.exec();
}

//When you have your class defined in .cpp file instead of .h file moc fails to process it properly.
//the moc tool reads a C++ header file
//if you have O_OBJECT in main.cpp, add #include "main.moc" at the end of the file:
#include "main.moc"
