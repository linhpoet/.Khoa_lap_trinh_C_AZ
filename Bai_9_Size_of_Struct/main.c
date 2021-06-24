#include <stdio.h>
#include <stdlib.h>


/*mac dinh pragma pack(4)*/
struct
{
    int a;
    char b;
    int c;
    char d;
}SizeOfStruct;


#pragma pack(1)         //1,2,4,8...
struct
{
    int a1;
    char b1;
    char d1;
    int c1;
}SizeOfStruct1;

/*vẫn là pragma pack(1)*/
struct
{
    int a2;
    char b2;
    int c2;
    char d2;
}SizeOfStruct2;


int main()
{
    printf("size of struct:%d\n", sizeof(SizeOfStruct));
    printf("size of struct 1:%d\n", sizeof(SizeOfStruct1));
    printf("size of struct 2:%d\n", sizeof(SizeOfStruct2));
    return 0;
}
