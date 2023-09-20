#include "radio.h"

Radio::Radio(QObject *parent)
{

}

void Radio::listen(int channel, QString name, QString message)
{
    qInfo() << channel <<"-"<<name<<"-"<<message<<"\n";
}
