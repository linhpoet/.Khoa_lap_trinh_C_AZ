#include <QCoreApplication>
#include <QObject>
#include <QDebug>
#include <QVariant>     //???

class Test : public QObject
{
    Q_OBJECT
    QString m_message;
public:
    //constrcutor
    explicit Test(QObject *parent = nullptr){}

    //syntax: Q_PROPERTY(type name READ name WRITE setName NOTIFY nameChanged);
    //message đầu là name của PROPERTY, not variable
    //message sau là READ: message function
    //setMessage là WROTE: setMessage function
    //messageChanged là NOTIFE: messageChanged signal
    Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged);    //???

    QString message() const
    {
        return m_message;
    }
    void setMessage(const QString &message)
    {
        m_message = message;
        emit messageChanged(m_message);
    }
signals:
    void messageChanged(QString message);
};

class Watcher : public QObject
{
    Q_OBJECT
public:
    explicit Watcher(){}

public slots:
    void messageChanged(QString message)
    {
        qInfo() << message;
    }
};

int main()
{
    Test tester;
    Watcher destination;

    QObject::connect(&tester, Test::messageChanged, &destination, &Watcher::messageChanged);

    tester.setProperty("message", QVariant("HelloWorld"));
    //qInfo() << tester.property("message");
    tester.setMessage("testing");
    return 0;
}


//When you have your class defined in .cpp file instead of .h file moc fails to process it properly.
//the moc tool reads a C++ header file
//if you have O_OBJECT in main.cpp, add #include "main.moc" at the end of the file:
#include "main.moc"
