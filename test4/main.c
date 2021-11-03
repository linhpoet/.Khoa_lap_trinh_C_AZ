#include<stdio.h>
#include<stdint.h>
#include<string.h>

typedef struct
{
    uint32_t rollNumber;
    char name[30];
    char branch[30];
    int mm;
    int dd;
    uint16_t yyyy;
}student_typedeft;

student_typedeft sv[100];


int main()
{
    printf("%d\n", sizeof(student_typedeft));
    for(int i=0; i<10; i++)
    {
        printf("%d\n", &sv[i]);
    }
}
