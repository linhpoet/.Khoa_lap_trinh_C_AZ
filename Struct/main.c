#include <stdio.h>
#include <stdlib.h>

struct dates
{
    int year;
    int month;
    int day;
};

/*sinhvien1 chi dai dien cho 1*/
struct
{
    char ten[20];
    int mssv;
}sinhvien1;


/*su dung tu khoa tyepdef: co the tao nhieu bien khac nhau kieu struct sinhvien*/
typedef struct
{
    char ten[20];
    int mssv;
}sinhvien;

/* Sturct_Inside_struct */
    struct Data
    {
            char data1;
            int data2;
            struct
            {
                char data5;
                int data6;
            }moredata;
    };

void input_Sturct_Inside_struct();

int main()
{
    struct dates day1, *day2;
    day1.day = 26;
    day1.month = 10;
    day1.year = 2021;

    day2 = &day1;
    printf("day = %d", day1.day);
    day2->day = 27;
    printf("day = %d", day2->day);
    printf("Hello world!\n");

    sinhvien1.mssv = 12345;
    //sinhvien1.ten = "le quang linh";

    input_Sturct_Inside_struct();

    return 0;
}

void input_Sturct_Inside_struct()
{
    struct Data dataofLinh;
    dataofLinh.data1 = 1;
    dataofLinh.data2 =6;
    dataofLinh.moredata.data5=7;

    /*output*/
    printf("\ndataofLinh.moredata.data5 = %d", dataofLinh.data1);
    printf("\ndataofLinh.moredata.data5 = %d", dataofLinh.moredata.data5);
}



