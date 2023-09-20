#include <QCoreApplication>
#include "station.h"
#include "radio.h"
#include <QDebug>
#include <qtextstream.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qInfo() << "Disconnecting\n";
    Radio tv1;
    Station channel1(&tv1,6,"giai tri");

    Radio boombox;
    Station & channels[3];
    channels[0] = new Station(&boombox, 94, "Rock and Roll");
    channels[1] = new Station(&boombox, 87, "Hip hop");
    channels[2] = new Station(&boombox, 104, "News");

    QObject::connect(&channel1, &Station::send, &tv1, &Radio::listen);

    channel1.broadcast("hello");
    return a.exec();
}
