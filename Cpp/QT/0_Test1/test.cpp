#include "test.h"

test::test(QObject *parent) : QObject{parent}
{
    qInfo() << this << "Constructor";
}

void test::dostuff()
{
    qInfo() << this << "do stuff";
}

void test::doOtherStuff()
{
    //'this' cannot use in static function of class
    //qInfo() << this << "do stuff";
    qInfo() << "do other stuff";
}
