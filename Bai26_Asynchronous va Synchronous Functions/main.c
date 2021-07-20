#include <stdio.h>
#include <stdlib.h>

#define false 0
#define true 1

_Bool bAsyn = false;
int main()
{
    /*lan 1:false == bAsyn ->  se thuc hien cac cau lenh*/
    Asynchronous_Function();
    /*lan 2:true == bAsyn -> function chi thuc hien sau lenh else, thuc hien kiem tra chuong trinh chay dung khong*/
    Asynchronous_Function();
    return 0;
}

int Synchronous_Function()
{
    /*thuc hien ac cau lenh va kiem tra*/

}

int Asynchronous_Function()
{
    if(false == bAsyn)
    {
        /*thuc hien cac cau lenh*/
        bAsyn == true;
        return(0);
    }
    else
    {
        /*check xem chuong trinh chay dung chua*/
        bAsyn == false;
    }
}
