#include <string>

class CongTy
{
public:
    CongTy();
    CongTy(std::string name1, int year);
    ~CongTy();

    std::string getName();
    int getYear();
private:
    std::string name;
    int year;
};
