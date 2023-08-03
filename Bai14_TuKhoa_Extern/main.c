#include <stdio.h>
#include <stdlib.h>

/*có thể sử dụng trong file .c khác thuộc project, nhưng phải khai báo extern int u32ExternChecking ở file đó */
int u32ExternChecking;
/*phạm vi sử dụng chỉ trong thuộc file main.c*/
static int u32StaticChecking;

extern void extern_check();

int main()
{
    printf("u32ExternChecking  = %d\n", u32ExternChecking);
    extern_check();
    printf("u32ExternChecking  = %d\n", u32ExternChecking);
    extern_check2();
    printf("u32ExternChecking  = %d\n", u32ExternChecking);
}
