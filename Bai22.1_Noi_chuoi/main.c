#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


/*
    a = sizeof(str1);
    b = sizeof(str2);
    str3 = str1 + str2
    =>  str1 = str3[0]->str3[a-2]           //chieu dai chuoi 1
        'space' = str3[a-1]
        str2 = str3[a]->str3[a+b-2]         //chieu dai chuoi 2
*/

char str1[] = "chuc mung";
char str2[] = "nam moi";
char str3[] = {};

int main()
{
    Noi_Chuoi(str1, sizeof(str1), str2, sizeof(str2));
    printf("\n%s", str3);
    printf("\nsizeof(str3) = %d",sizeof(str3));
    printf("\nsizeof(str3) = sizeof(str1) + 1 sizeof(str2) - 1 = %d",sizeof(str1) + 1 + sizeof(str2) - 1);


}

Noi_Chuoi(char* pStr1, int SizeStr1, char* pStr2, int SizeStr2)
{
    /*gan str1 vao*/
    for(int i=0; i<=SizeStr1-2; i++)
    {
        str3[i] = *pStr1;
        pStr1++;
    }
    /*them dau space*/
    str3[SizeStr1-1] = ' ';
    /*gan str2 vao*/
    for(int i=SizeStr1; i<=SizeStr1+SizeStr2-2; i++)
    {
        str3[i] = *pStr2;
        pStr2++;
    }
}
