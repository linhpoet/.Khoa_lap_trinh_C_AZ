#include <stdio.h>
#include <stdlib.h>
#include "weak.h"

int main()
{
    printf("Hello world!\n");
    weak_function();
    return 0;
}

/*strong function trong hàm main*/
void weak_function()
{
    printf("weak vs strong\n");
}

