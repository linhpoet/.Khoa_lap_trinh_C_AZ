#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

char str1[] = "linh";

int main()
{
    printf("ban dau:\n");
    printf("\tsize = %d\n", sizeof(str1));
    printf("\tstr1[5] = %c  ki tu rong\n", str1[5]);
    printf("sau khi gan them str1[5] = 'a':\n");
    str1[5] = 'a';
    printf("\tstr1[5] = %c\n", str1[5]);
    printf("\tsize = %d\n", sizeof(str1));
}
