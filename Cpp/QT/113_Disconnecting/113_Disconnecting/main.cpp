#include <QCoreApplication>
#include "station.h"
#include "radio.h"
#include <iostream>
#include <QDebug>
#include <qtextstream.h>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTextStream cin(stdin);
    qInfo() << "Disconnecting\n";
    Radio tv1;
    Station channel1(nullptr,6,"giai tri");

    Radio boombox;
    Station* channels[3];
    channels[0] = new Station(nullptr, 94, "Rock and Roll");
    channels[1] = new Station(nullptr, 87, "Hip hop");
    channels[2] = new Station(nullptr, 104, "News");

    //QObject::connect(&channel1, &Station::send, &tv1, &Radio::listen);

    boombox.connect(&boombox, &Radio::quit, &a, &QCoreApplication::quit);
    do
    {
        qInfo() << "Enter on, off, test or quit";
        QTextStream qtin(stdin);
        qtin.flush();
        //qtin.skipWhiteSpace();
        QString line = qtin.readLine().trimmed().toUpper();

        if(line == "ON")
        {
            for(int i=0; i<3; i++)
            {
                QObject::connect(channels[i], &Station::send, &boombox, &Radio::listen);    //static function
            }
            qInfo() <<"radio on";
        }
        else if (line == "OFF")
        {
            for(int i=0; i<3; i++)
            {
                boombox.disconnect(channels[i], &Station::send, &boombox, &Radio::listen);
            }
            qInfo()<<"radio off";
        }
        else if(line == "TEST")
        {
            qInfo() << "testing";
            for (int i=0; i<3; i++)
            {
                channels[i]->broadcast("live");

            }
            qInfo() << "test complete";
        }
        else if(line == "QUIT")
        {
            qInfo() << "quitting";
            emit boombox.quit();
            break;
        }

    }while(true);

    delete channels[0];
    delete channels[1];
    delete channels[2];

    return a.exec();
}
