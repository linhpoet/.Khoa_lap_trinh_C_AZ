#include <QCoreApplication>
#include <iostream>


class myIssue : public std::exception
{
public:
    const char* description;
    const char* what() const throw()
    {
        return "my Issue";
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    do
    {
        try
        {
            int max = 44;
            int div = 0;
            qInfo() << "enter a number to divide by (or Zero for an issue)";
            std::cin >> div;

            if(div == 0)
            {
                throw std::invalid_argument("cannot devide to zero");
            }

            if(div > 44)
            {
                myIssue e;
                e.description = "user not read manual";
                throw e;
            }

            int answer = max / div; //posible exception
            qInfo() << answer;
        }
        catch(myIssue &e)
        {
            qWarning() << e.what() <<":" << e.description;

        }
        catch (std::exception &e)
        {
            qWarning() <<"catch:" <<e.what();
        }
        catch(...)
        {
            //catch all - very bad case
        }

    }while (true);

    return a.exec();
}
