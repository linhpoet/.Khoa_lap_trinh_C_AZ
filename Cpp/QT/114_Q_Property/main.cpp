#include <QCoreApplication>
#include <QObject>
#include <QDebug>
#include <QVariant>     //???
class Test : public QObject
{
    Q_OBJECT
    QString m_message;

public:
    explicit Test(QObject *parent = nullptr){}

    Q_PROPERTY(type name READ name WRITE setName NOTIFY nameChanged)

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
    qInfo() << tester.property("message");
    tester.setMessage("testing");
    return 0;
}


//When you have your class defined in .cpp file instead of .h file moc fails to process it properly.
//the moc tool reads a C++ header file
//if you have O_OBJECT in main.cpp, add #include "main.moc" at the end of the file:
#include "main.moc"
