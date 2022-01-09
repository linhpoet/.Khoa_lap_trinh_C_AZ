#include <stdio.h>
#include <stdint.h>
//#include "test1.h"

int global = 10;

char u8Buff[10];

#define NVIC_IPR_BASE_ADDR 	((uint32_t*)0x61fe1c)
uint32_t *pNVIC_IPR_BASE_ADDR = (uint32_t*) 0x61fe1c;

void abc(int);
void abc(int x);
void abc(int y)
{
    printf("%d", y);
}




int main()
{
    int x = 1;
    int const *pdata =&x;
    x=2;
    printf("%d", x);
    printf("ok");
}

/*

void TachSO(uint32_t u32Num, char *pu8Buff)
{
    uint32_t temp = u32Num;
    do
    {
        *pu8Buff = temp % 10;
        temp = (temp - *pu8Buff)/10;
        printf("%d\n", *pu8Buff);
        pu8Buff++;
    }
    while(temp>0);
}

Test_Pointer(uint32_t u32Addr, uint32_t *u32Buffer)
{
    *(uint32_t*)u32Addr = 9;                //tao 1 con tro tro toi dia chi u32Addr, roi thay doi gia trị tai địa chỉ đó
    printf("%x\n", u32Addr);
    printf("%x\n", *(uint32_t*)u32Addr);
    printf("%x\n", u32Buffer);
    printf("%x\n", *u32Buffer);
}

void changeGlobal1()
{
    global++;
}

void TestForLoop()
{
    for (int i=0; i<10; i=i+4)          //ok
    {
        printf("%d\n", i);
    }
}
*/