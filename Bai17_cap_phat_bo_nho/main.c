#include <stdio.h>
#include <stdlib.h>

int *ptr;
int main()
{
    /*  malloc  */
    printf("\tmalloc\n");
    ptr = (int *) malloc(5 * sizeof(int));
    show_infor();

    /*  calloc  */
    printf("\tcalloc\n");
    ptr = (int *) calloc(5, sizeof(int));
    show_infor();

    /*  change value*/
    printf("\tchange value\n");
    for(int i=0; i<5; i++)
    {
        *(ptr+i) = i;
        printf("%d\n", *(ptr+i));
    }

    /*  realloc */
    printf("\trealloc\n");
    ptr = (int *) realloc(ptr, 10);
    for(int i=0; i<10; i++)
    {
        printf("%d\n", *(ptr+i));
    }
}

void show_infor()
{
    for(int i=0; i<5; i++)
    {
        printf("%d\n", *(ptr+i));
    }
}
