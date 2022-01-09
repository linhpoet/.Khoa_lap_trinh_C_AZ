#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
	char name[64];
	double salary;
};
struct employee NV[50];
int NumberofEmployee;
char tenNV[64];
int key;
int main()
{
    /*Khoi tao so nhan vien*/
    printf("nhap so nhan vien:");
    scanf("%d",&NumberofEmployee);
    Khoi_tao(&NV);
    Xuat(&NV);

    while(1)
    {
        printf("**\t1.Tim\t**\n");
        printf("**\t2.Xoa\t**\n");
        scanf("%d", &key);
        switch(key)
        {

    case 1:
        TimNV_no_pointer();
        break;
    case 2:
        XoaNV(&tenNV);
        break;
        }
    }
}

void Khoi_tao(struct employee *pNV)
{
    for(int i=0; i<NumberofEmployee; i++)
    {
        fflush(stdin);
        printf("nhap ten:");
        char c=0;
        char j=0;
        do
        {
            scanf("%c",&c);
            pNV->name[j] = c;
            j++;
        }while(c != '\n');
        printf("nhap luong:");
        scanf("%d", &(pNV->salary));
        pNV++;
    }
}

void NhapTen()
{
    for(int i=0; i<64; i++)
    {
        tenNV[i]=0;
    }
    printf("nhap ten:");
    fflush(stdin);
    char c=0;
    char j=0;
    do
    {
        scanf("%c",&c);
        tenNV[j] = c;
        j++;
    }while(c != '\n');                      //co them '\n' o vi tri cuoi
}
void Xuat(struct employee *pNV)
{
    for(int i=0; i<NumberofEmployee; i++)
    {
    printf("ten: %s\t", pNV->name);
    printf("salary = %d\n", pNV->salary);
    pNV++;
    }
}

void TimNV_no_pointer()
{
    NhapTen();
    for(int i=0; i<NumberofEmployee; i++)
    {
        for(int j=0; j<strlen(tenNV); j++)
        {
            if(tenNV[j] == NV[i].name[j])
            {
                if(tenNV[j] == '\n')
                {
                    printf("ten = %s\n",NV[i].name);
                    printf("slary = %d\n", NV[i].salary);
                    break;
                }
            }else
            {
                break;
            }

        }
    }
}

void TimNV_use_pointer(char *ten)
{
    NhapTen();
    for(int i=0; i<NumberofEmployee; i++)
    {
        ten = &tenNV;
        for(int j=0; j<strlen(tenNV); j++)
        {
            if(*ten == NV[i].name[j])
            {
                ten++;
            }else
            {
                break;
            }
        }
        if(*ten == 0)
        {
            printf("ten = %s\n",NV[i].name);
            printf("slary = %d\n", NV[i].salary);
            break;
        }
    }
}

void XoaNV(char *ten)
{
    NhapTen();
        for(int i=0; i<NumberofEmployee; i++)
    {
        for(int j=0; j<strlen(tenNV); j++)
        {
            if(*ten == NV[i].name[j])
            {
                ten++;
            }else
            {
                break;
            }
        }
        if(*ten == 0)
        {
            for(int j=0; j<64; j++)
            {
                NV[i].name[j]=0;
            }
            NV[i].salary = 0;
            break;
        }
    }
}

