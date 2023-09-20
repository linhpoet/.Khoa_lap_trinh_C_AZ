#include <QCoreApplication>
#include <iostream>
class Emitter : public QObject
{
    Q_OBJECT
public:
    Emitter();              //constructor

    void emitSignal1();
    void emitSignal2(int);
    void emitSignal3(QString, int);

    void setName(QString);
signals:
    void signal1();
    void signal2(int);
    void signal3(QString, int);
};

class Receiver : public QObject
{
    Q_OBJECT
public:
    Receiver();

public slots:
    void receiveSignal1();
    void receiveSignal2(int);
    void receiveSignal3(QString, int);
};

int main(int argc, char *argv[])
{
     QCoreApplication a(argc, argv);

     qInfo() << "hello signal and slot\n";
     Emitter e1, e2;
     Receiver r1, r2;

     e1.setName("Emitter 1");
     e2.setName("Emitter 2");

     QObject::connect(&e1, SIGNAL(signal1()), &r1, SLOT(receiveSignal1()));
     e1.emitSignal1();

     //QObject::connect(&e2, Emitter::signal2, &r2, Receiver::receiveSignal2);
     //e2.emitSignal2(3);

     //QObject::connect(&e1, Emitter::signal3, &r1, Receiver::receiveSignal3);
     //QObject::connect(&e2, Emitter::signal3, &r1, Receiver::receiveSignal3);
     //e1.emitSignal3("Current year is", 2016);
     //e2.emitSignal3("Sex is", 0);

     return a.exec();
}

Emitter::Emitter() {}       //definition constructor
void Emitter::emitSignal1()
{
    emit signal1();
}
void Emitter::emitSignal2(int arg)
{
    emit signal2(arg);
}
void Emitter::emitSignal3(QString arg1, int arg2)
{
    emit signal3(arg1, arg2);
}
void Emitter::setName(QString arg)
{
    this->setObjectName(arg);
}


Receiver::Receiver(){}

void Receiver::receiveSignal1()
{
    qInfo() << "Signal 1 received!\n";
}

void Receiver::receiveSignal2(int arg)
{
    qInfo() << "Signal 2 came with an integer: "
              << arg
              << "\n";
}

void Receiver::receiveSignal3(QString arg1, int arg2)
{
     std::cout << "Signal 3 from "
               << QObject::sender()->objectName().toStdString()
               << ": "
               << arg1.toStdString()
               << " "
               << QString::number(arg2).toStdString()
               << "\n";
}

//When you have your class defined in .cpp file instead of .h file moc fails to process it properly.
//the moc tool reads a C++ header file
//if you have O_OBJECT in main.cpp, add #include "main.moc" at the end of the file:
#include "main.moc"
