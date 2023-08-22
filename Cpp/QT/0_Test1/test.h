#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QDebug>

class test : public QObject
{
    Q_OBJECT
public:
    explicit test(QObject *parent = nullptr);
    void dostuff();
    static void doOtherStuff();
signals:

};

#endif // TEST_H
