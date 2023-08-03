#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main()
{
    reverseBinNumber(0xff);
    reverse32BinNumber(0xff);
    ConvertDecimaltoBinary(0xabcd);
}

void reverseHexNumber(uint32_t HexNum)
{
    uint32_t TempNum = HexNum;
    uint8_t Count=0;
    uint8_t Num[10];

    while(TempNum > 0)
    {
        Num[Count] = TempNum & (uint32_t)0x0f;
        Count++;
        TempNum = TempNum >> 4;
    }
    if(HexNum == 0)
    {
        Num[Count] = 0;
        Count = 1;
    }

    uint32_t reverseNum = 0;
    for(int i=0; i<Count; i++)
    {
        //reverseNum = (reverseNum << 4) | ((HexNum >> (4*i)) & (uint32_t)0x0f);
        reverseNum = (reverseNum << 4) | Num[i];
    }
    printf("%d\n", Count);
    printf("%x", reverseNum);
}

/*
    Dao tu truoc lui sau
    Ko dung cho so am
    Chi dao cac bit co gia tri
*/
void reverseBinNumber(uint32_t BinNum)
{
    uint8_t Count = 0;
    uint32_t TempNum = BinNum;
    uint32_t reverseBinNum = 0;

    while(TempNum>0)
    {
        Count++;
        TempNum = TempNum >> 1;
    }
    if(BinNum == 0)
    {
        Count = 1;
    }

    for(int i=0; i<Count; i++)
    {
        reverseBinNum = (reverseBinNum << 1) | ((BinNum >> (1*i)) & (uint32_t)0x01);
    }
    printf("%d\n", Count);
    printf("%x", reverseBinNum);
}

/*
    Dao tu truoc lui sau
    Ko dung cho so am
    Dao ca 32 bit
*/
void reverse32BinNumber(uint32_t BinNum)
{
    uint8_t Count = 0;
    uint32_t TempNum = BinNum;
    uint32_t reverseBinNum = 0;

    while(TempNum>0)
    {
        Count++;
        TempNum = TempNum >> 1;
    }
    if(BinNum == 0)
    {
        Count = 1;
    }

    for(int i=0; i<32; i++)
    {
        reverseBinNum = (reverseBinNum << 1) | ((BinNum >> (1*i)) & (uint32_t)0x01);
    }
    printf("%d\n", Count);
    printf("%x\n", reverseBinNum);
}

void ConvertDecimaltoBinary(uint32_t DecNum)
{
    uint32_t TempNum = DecNum;
    uint32_t Bin[32];
    uint32_t BinNum = 0;
    uint32_t BinCount = 0;

    for(int i=31; i>=0; i--)
    {
        Bin[i] = (TempNum) & 0x01;
        TempNum = TempNum>>1;
    }
    for(int i=0; i<32; i++)
        printf("%d",Bin[i]);

    /**/
    BinCount = 1;
    while(DecNum != 0)
    {
        TempNum = DecNum % 2;
        DecNum = DecNum / 2;
        BinNum = BinNum + TempNum*BinCount;
        BinCount *= 10;
    }
    printf("\n%d",BinNum);
}





