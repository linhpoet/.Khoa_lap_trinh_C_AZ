#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qInfo() <<"hello world\nlinh";
    return a.exec();
}
