#include <QCoreApplication>
#include <QDebug>
int main()
{
   QString data = "Hello world how are you";
   QStringList list = data.split(" ");
   qInfo() << list;
   qInfo() << list.size();
   for(int i=0; i<list.size(); i++)
   {
       qInfo() << list[i];
   }

}
