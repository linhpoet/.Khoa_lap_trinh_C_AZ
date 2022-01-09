#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
void Input_NoUse_Pointer();
void Input_Use_Pointer();
void Output_struct();
struct Data
{
    char data1;
    int data2;
};

typedef struct {
   char name[30];
    int id;
    int age;
}sinhvien;
#define sv3 ((sinhvien*)((uint64_t)0x61fef0))
typedef struct Data datatypedef;                    //

datatypedef sinhvien1, *psinhvien1 = &sinhvien1;

/*2 cau lenh nay tuong duong nhau: vi da khai bao typedef o tren*/
#define sv4 ((datatypedef*)((uint64_t)0x61fef0))
#define sv5 ((struct Data*)((uint64_t)0x61fef0))


int main()
{
    //psinhvien1 = &sinhvien1;
    Input_NoUse_Pointer();
    Output_struct();

    Input_Use_Pointer();
    Output_struct();
    printf("Hello world!\n");
    printf("size of con tro luon khong doi:%d\n", sizeof(psinhvien1));
    printf("%d\t%d\n", &sinhvien1, psinhvien1);
    printf("%d\n", *psinhvien1);
    psinhvien1++;                                   //con trỏ kiểu struct Data 8 byte nên địa chỉ khi ++ sẽ tăng 8 bytepsinhvien1++;
    printf("dia chi moi: %d\n", psinhvien1);
    printf("gia tri moi la gia tri o dia chi moi:%d\n", *psinhvien1);

    printf("\nuse");
    sv3->id = 0x100;
    printf("\n%x", sv3->id);
    sv4->data2 = 0x200;
    printf("\n%x", sv5->data2);

    return 0;
}

void Input_NoUse_Pointer()
{
    sinhvien1.data1 = 1;
    sinhvien1.data2 = 100;
}

void Input_Use_Pointer()
{
    psinhvien1->data1 = 2;
    psinhvien1->data2 = 200;
}

void Output_struct()
{
    /*no use pointer*/
    printf("data1 = %d\n", sinhvien1.data1);
    printf("data2 = %d\n", sinhvien1.data2);

    /*use pointer*/
    printf("\tuse pointer\n");
    printf("data1 = %d\n", psinhvien1->data1);
    printf("data2 = %d\n\n", psinhvien1->data2);
}
