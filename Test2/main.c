#include <stdio.h>
#include <stdint.h>

typedef union
{
    uint32_t MODER;
    struct
    {
        uint32_t a  :12;
        uint32_t b  :8;
        uint32_t c  :12;
    }Moder_bit;
}Moder;

int main()
{
    Moder abc;
    Input(&abc);
    Output(&abc);
    printf("%x\n", abc.MODER);
    ConvertToBin(abc.MODER);
    ConvertToBin(abc.Moder_bit.a);
    ConvertToBin(abc.Moder_bit.b);
    ConvertToBin(abc.Moder_bit.c);
}

void Input(Moder* abc)
{
    abc->MODER = 0xabcdefab;
}

void Output(Moder* abc)
{
    printf("%x\n", abc->MODER);
    printf("%x\n", abc->Moder_bit.a);
    printf("%x\n", abc->Moder_bit.b);
    printf("%x\n", abc->Moder_bit.c);

}

void ConvertToBin(uint32_t Num)
{
    uint32_t TempNum = Num;
    uint8_t Bin[32];
    for(int i=31; i>=0; i--)
    {
        Bin[i] = TempNum & 0x01;
        TempNum = TempNum >> 1;
    }
    for(int i=0; i<32; i++)
    {
        printf("%d", Bin[i]);
    }
    printf("\n");
}