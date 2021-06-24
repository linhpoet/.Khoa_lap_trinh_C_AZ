#include <stdio.h>
#include <stdlib.h>

typedef union
{
    unsigned int a;         //4byte
    unsigned char b;        //1 byte
}GPIO_Type;

int main()
{
    GPIO_Type GPIO;
    printf("size of union: %d\n", sizeof(GPIO_Type));       //bằng với size của a = 4
    GPIO.a = 1222;
    printf("a = %d\n",GPIO.a);                              //a = 0x000004c6
    printf("b = %d\n",GPIO.b);                              //share chung byte voi a nen b = 0xc6, 1 byte cuối của a

    GPIO.b = 1;                                             //b = 1, suy ra byte cuoi cua a se la 0x01
    printf("a = %d\n",GPIO.a);                              //3 byte dau khong thay doi nen gia tri a=0x00000401 =1025
    printf("b = %d\n",GPIO.b);
}
