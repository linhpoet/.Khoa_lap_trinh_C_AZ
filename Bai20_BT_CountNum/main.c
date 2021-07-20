#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main()
{
    uint32_t u32Num;
    printf("nhap 1 so nguen > 0:");
    scanf("%d", &u32Num);
    Count_Number(&u32Num);
}

int Count_Number(uint32_t *pNum)
{
    uint16_t u16Count = 0;
    uint32_t ReverseNumber = 0;
    uint32_t u32Num_temp = *pNum;
    uint8_t u8Num_temp[10] = {0};

    if (u32Num_temp < 10)
    {
        u16Count = 1;
        u8Num_temp[0] = u32Num_temp;
    }
    else while (u32Num_temp > 0)
    {
        u8Num_temp[u16Count] = u32Num_temp % 10;
        u32Num_temp = (u32Num_temp - u8Num_temp[u16Count]) / 10;
        u16Count++;
    }
    printf("so chu so: %d\n", u16Count);
    printf("in ra so dao nguoc:");
    for(int count=0; count<u16Count; count++)
        printf("%d", u8Num_temp[count]);
    
    printf("in ra so do:");
    for(int count=u16Count-1; count>=0; count--)
        printf("%d", u8Num_temp[count]);

    /**/
    for(int count=0; count<u16Count; count++)
        ReverseNumber = ReverseNumber * 10 + u8Num_temp[count];
    printf("\nReverseNumber = %d",ReverseNumber);
}
