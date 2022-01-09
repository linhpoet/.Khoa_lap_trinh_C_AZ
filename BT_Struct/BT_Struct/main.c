#include <stdio.h>
#include <stdlib.h>

struct student
    {
        char name[30];
        int id;
        int sub[3];
    };
int siso;
struct student sv[50];
int main()
{
    printf("nhap so sinh vien:");
    scanf("%d",&siso);
    Infor_Input();
    Infor_Output();
}   

Infor_Input()
{
    for (int i=0; i<siso; i++)
    {
        /*xoa dau enter con du*/
        fflush(stdin);
        /*nhap ten*/
        printf("nhap ten sv %d:",i);
        char c = 0;;
        int j=0;
        do
        {
            scanf("%c",&c);
            sv[i].name[j] = c;
            j++;
        } while (c != '\n');

        /*nhap mssv*/
        printf("nhap mssv %d:",i);
        scanf("%d",&sv[i].id);

        /*nhap diem*/
        for (int monhoc=0; monhoc<3; monhoc++)
        {
        printf("nhap diem mon %d cho sv %d:",monhoc, i);
        scanf("%d",&sv[i].sub[monhoc]);

        }
        printf("\n");
    }
}

Infor_Output()
{
    printf("sv co diem mon 0 cao nhat:\n");
    int max=sv[0].sub[0];
    /*stt sinh vien can tim*/
    int stt = 0;
    for (int i=0; i<siso; i++)
    {
        if (max < sv[i].sub[0])
        {
            max = sv[i].sub[0];
            stt = i;
        }
    }
    printf("%s%d diem\n",sv[stt].name, sv[stt].sub[0]);

    printf("sv co diem mon 1 cao nhat:\n");
    max=sv[0].sub[1];
    /*stt sinh vien can tim*/
    stt = 0;
    for (int i=0; i<siso; i++)
    {
        if (max < sv[i].sub[1])
        {
            max = sv[i].sub[1];
            stt = i;
        }

    }
    printf("%s%d diem\n",sv[stt].name, sv[stt].sub[1]);

    /*mon 2*/
    printf("sv co diem mon 2 cao nhat:\n");
    max=sv[0].sub[2];
    /*stt sinh vien can tim*/
    stt = 0;
    for (int i=0; i<siso; i++)
    {
        if (max < sv[i].sub[2])
        {
            max = sv[i].sub[2];
            stt = i;
        }

    }
    printf("%s%d diem\n",sv[stt].name, sv[stt].sub[2]);
}
