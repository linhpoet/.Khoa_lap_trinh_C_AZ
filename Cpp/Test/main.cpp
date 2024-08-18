#include <iostream>

using namespace std;

#define D0 0x01
#define D1 0x02
#define D2 0x04
#define D3 0x08

void showChip(int chipResult, string str)
{
    if( (chipResult & D0) == D0)
    {
        chipResult |= D3;
        cout << str <<endl;
    }
    else
    {

        cout << "black\n";
    }
}

int main()
{
    showChip(15, "gray");
    showChip(0, "gray");
    cout <<"hello world"<<endl;
    return 0;
}
