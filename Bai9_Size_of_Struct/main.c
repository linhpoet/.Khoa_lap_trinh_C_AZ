#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*mac dinh pragma pack(size lon nhat cua phan tu trong struct)*/
struct
{
    int a;
    char b;
    int c;
    char d;
}SizeOfStruct;

/*mac dinh pragma pack(1)*/
struct
{
    char b;
}SizeOfStruct1;         //1 byte, tinh theo size cua thanh phan lon nhat <=4

#pragma pack(1)         //1,2,4,8...
struct
{
    int a1;
    char b1;
    char d1;
    int c1;
}SizeOfStruct2;

/*vẫn là pragma pack(1)*/
struct
{
    int a2;
    char b2;
    int c2;
    char d2;
}SizeOfStruct3;

typedef struct
{
  uint16_t GPIO_Pin;             /*!< Specifies the GPIO pins to be configured.
                                      This parameter can be any value of @ref GPIO_pins_define */

  uint16_t GPIO_Speed;  /*!< Specifies the speed for the selected pins.
                                      This parameter can be a value of @ref GPIOSpeed_TypeDef */

  uint16_t GPIO_Mode;    /*!< Specifies the operating mode for the selected pins.
                                      This parameter can be a value of @ref GPIOMode_TypeDef */
}GPIO_InitTypeDef;


int main()
{
    printf("size of struct:%d\n", sizeof(SizeOfStruct));
    printf("size of struct 1:%d\n", sizeof(SizeOfStruct1));
    printf("size of struct 2:%d\n", sizeof(SizeOfStruct2));
    printf("size of struct 2:%d\n", sizeof(SizeOfStruct3));
    printf("size of struct 2:%d\n", sizeof(GPIO_InitTypeDef));

    GPIO_InitTypeDef struct1;
    printf("size of struct 2:%d\n", sizeof(struct1));

    return 0;
}
