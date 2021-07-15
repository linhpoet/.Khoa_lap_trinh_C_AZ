/* enumurate    : liệt kê   */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


enum test
{
    a,  
    b,
    c=100,
    d
};
/*
    a=0, b=1, c=100, d=101
*/

typedef enum Flash
{
    Flash_Error,
    Flash_no_Error,
}Flash_Status;


/*ham co gia tri tra ve la kieu Flash_Status ( nhung thu duoc liet ke trong Flash_Status*/
Flash_Status Flash_Write(uint32_t var1, uint32_t var2)
{
    if (1)
        return Flash_Error;
    else
        return Flash_no_Error;

}

/*ham tra ve kieu int*/
/*gia tri can truyen vao ham nay la 2 bien duoc khai bao trong FLash_Status*/
int Input(Flash_Status Mode)
{

}


/*ham tra ve kieu int*/
int function1()
{

}


int main()
{
    printf("%d", a);
    printf("Hello world!\n");
    return 0;
}
