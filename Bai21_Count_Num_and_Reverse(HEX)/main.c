/*
	Written by:  		iosha
	Date Written:		25/06/2021
	Description:		đếm và đảo ngược 1 số dạng Hex
                        code dùng cho số <= 32 bit, muốn dùng cho số lớn hơ thì phải thay đổi 1 chút
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint16_t u32Number = 0x63021;

int main()
{
    printf("u8Length = %d\n", CountNumberHex(&u32Number));
    printf("u32ReverseNumber = %d\n", ReverseNumberHex(&u32Number));
}

int CountNumberHex(uint32_t *pu32Number)
{
    uint8_t u8LengthHexNum = 8;
    uint32_t u32TempNum = 0;

    if(*pu32Number == 0)
        return (0);

    do
    {
        u32TempNum = (*pu32Number >> ((u8LengthHexNum - 1) * 4)) & 0xF;
        u8LengthHexNum--;
    }while (u32TempNum == 0);

    return (u8LengthHexNum + 1);
}

int ReverseNumberHex(uint32_t *pu32Number)
{
    uint8_t u8LengthHexNum = CountNumberHex(pu32Number);
    uint32_t u32TempNum = 0;
    uint8_t u8TempCount = 0;

    while(u32TempCount < u8LengthHexNum)
    {
        u32TempNum = (u32TempNum <<  4) | (((*pu32Number >> (u32TempCount * 4)) & 0xF));
        u32TempCount++;
    }
    return (u32TempNum);

}




