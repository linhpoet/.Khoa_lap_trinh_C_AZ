/*
	Written by:  		iosha
	Date Written:		26/06/2021
	Description:		đếm và đảo ngược 1 số dạng BIN(khác với đảo 0 <--> 1, đảo ở đây là bit 31 thành bit0, bit 30 thanh bit 1...) không thay đổi biến gốc
                        vd: x=0010010 sau khi dao se duoc 0100100
                        code dùng cho số <= 32 bit, muốn dùng cho số lớn hơ thì phải thay đổi 1 chút
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint32_t ReverseNumberBIN(uint32_t *pu32Number);

uint32_t u32Number = 1234567;

int main()
{
    printf("u8Length = %d\n",CountNumberBIN(&u32Number));
    printf("u32ReverseNumber = %u\n", ReverseNumberBIN(&u32Number));

}

int CountNumberBIN(uint32_t *pu32Number)
{
    uint8_t u8Count = 32;
    uint32_t u32TempNum;

    if(*pu32Number == 0)
        return (0);

    do
    {
        /* code */
        u8Count--;
        u32TempNum = (*pu32Number >> u8Count) & 0x01;
    } while (u32TempNum == 0);
    return(u8Count + 1);

}

uint32_t ReverseNumberBIN(uint32_t *pu32Number)
{
    uint8_t u8LengthBinNum = CountNumberBIN(pu32Number);
    uint32_t u32TempNum = 0;
    uint8_t u8TempCount = 0;

    while(u8TempCount < 32)
    {
        u32TempNum = (u32TempNum << 1) | ((*pu32Number >> u8TempCount) & 0x01);
        u8TempCount++;
    }
    return (u32TempNum);
}
