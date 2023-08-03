#include <iostream>
#include "ChaMe.h"
#include "ConCai.h"

using namespace std;

int main()
{
    ChaMe chame, *p;        //class, con trỏ kiểu class cha
    chame.XinChao();        //lấy hàm XinChao() ở class ChaMe

    ConCai con, *pconcai;
    con.XinChao();      //lấy hàm XinChao() ở class ConCai
    pconcai->XinChao(); //lấy hàm XinChao() ở class ConCai

    p = &con;
    p->XinChao();       //lấy hàm XinChao() ở class ChaMe


    return 0;
}
