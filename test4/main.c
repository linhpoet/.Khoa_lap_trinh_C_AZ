#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
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


typedef struct
{
	uint32_t MODER;
	uint32_t OTYPER;
	uint32_t OSPEEDR;
	uint32_t PUPDR;
	uint32_t IDR;
	uint32_t ODR;
	uint32_t BSRR;
	uint32_t LCKR;
	uint32_t AFRL;
	uint32_t AFRH;
}GPIO_Config_t;

typedef struct
{
	uint32_t SR;
	uint32_t DR;
	uint32_t BRR;
	uint32_t CR1;
	uint32_t CR2;
	uint32_t CR3;
	uint32_t GTPR;
}USART_Config_t;


//int test_array(int nums, int size)
//{
//   return nums[1];                 //truyen vao dia chi nhung van dung duoc
//}
/*
                            4 4 4 4 4 4 4
                            4 3 3 3 3 3 4
                            4 3 2 2 2 3 4
                            4 3 2 1 2 3 4
                            4 3 2 2 2 3 4
                            4 3 3 3 3 3 4
                            4 4 4 4 4 4 4
                            */
void function_address();    //mới khai báo, chưa có địa chỉ
void function_address()     //đã tồn tại và có địa chỉ
{

}

struct s {
    int arraySize;          //4 byte
    int array[];            //flexible
};

int mang1[2] = {};
int mang[] = {};
int main()
{
    const int const_val = 10;
    int *ptr_to_const = &const_val;

    printf("Value of constant is %d",const_val);
    *ptr_to_const = 20;
    printf("Value of constant is %d",const_val);
    return 0;
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
