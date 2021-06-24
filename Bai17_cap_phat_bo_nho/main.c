#include <stdio.h>
#include <stdlib.h>

int *pGlo;


int main()
{
    malloc_vs_calloc();
}

void show_infor()
{
    for (int i=0; i<5; i++)
    {
        printf("%d\n",*(pGlo+i));
    }
}

int f1()
{
    int* ptr;
    /*cấp phát 5 ô nhớ cho con trỏ ptr*/
    ptr = (int*)malloc(5 * sizeof(int));
    pGlo = ptr;
    for (int i=0; i<5; i++)
    {
        *(ptr+i) = i;
    }
}

int f2()
{
    int* ptr;
    ptr = (int*)malloc(5 * sizeof(int));
    pGlo = ptr;
    for (int i=0; i<5; i++)
    {
        *(ptr+i) = i;
    }
    /*giải phòng vùng nhớ, về giá trị ngẫu nhiến*/
    free(ptr);
}

int malloc_vs_calloc()
{
/*
    so sánh                 calloc                  malloc
    giá trị khởi tạo        Có, all = 0             Không, giá trị cũ, ngẫu nhiên
    số lượng tham số        2 (số lượng và size)    1 (số lượng NHÂN size)          1
*/

    int *ptr;
    /*malloc*/
    pGlo = (int*)malloc(5 * sizeof(int));
    printf("use malloc\n");
    show_infor();
    free(pGlo);

    /*calloc*/
    pGlo = (int*)calloc(5, sizeof(int));
    printf("use calloc\n");
    show_infor();
    free(pGlo);
}
