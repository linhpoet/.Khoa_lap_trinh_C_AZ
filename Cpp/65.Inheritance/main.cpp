#include <iostream>
#include "include/ChaMe.h"
#include "include/ConCai.h"
#include "include/ChauChat.h"

using namespace std;

int main()
{
    ChaMe chame;
    chame.XinChao();

    ConCai concai;
    concai.XinChao();
    concai.callProtectedfromBase();

    ChauChat chauchat;
    chauchat.ConcaiXinChao();
    chauchat.callProtectedfromBase0();
    return 0;
}
