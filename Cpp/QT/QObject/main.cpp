#include <QCoreApplication>
#include <QDebug>
class Cat : public QObject
{
    Q_OBJECT
public:
    Cat()
    {

    }
signals:
    void run();
public slots:
    void scared()
    {
        qInfo() <<"cat run";
        emit run();
    };


};

class Dog : public QObject
{
    Q_OBJECT        //macro
public:
    Dog(){};
signals:
    void Bark();   //suar
public slots:
    void Chase() { qInfo() <<"Chasing"<<sender();}  //duoi
private:
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Dog dog;
    dog.setObjectName("Fido");
    dog.Chase();

    Cat cat;
    cat.setObjectName("Tom");

    QObject::connect(&dog, &Dog::Bark, &cat, &Cat::scared);
    QObject::connect(&cat, &Cat::run, &dog, &Dog::Chase);

    emit dog.Bark();        //emit signal

    return a.exec();
}

#include "main.moc"
