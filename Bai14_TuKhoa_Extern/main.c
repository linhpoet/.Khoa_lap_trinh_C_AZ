#include <stdio.h>
#include <stdlib.h>

/*có thể sử dụng trong file .c khác thuộc project, nhưng phải khai báo extern int u32ExternChecking ở file đó */
int u32ExternChecking;

/*phạm vi sử dụng chỉ trong thuộc file main.c*/
static int u32StaticChecking;

int main()
{
    extern_check();
    printf("u32ExternChecking  = %d", u32ExternChecking);
}
