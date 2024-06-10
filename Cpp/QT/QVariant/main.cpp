#include <QCoreApplication>
#include <QDebug>
#include <QVariant>
void QVariantValue(QVariant Value)
{
    qInfo() << Value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVariant value1 = 5;
    QVariant value2 = "hello string";

    QVariantValue(value1);
    QVariantValue(value2);
    return a.exec();
}
