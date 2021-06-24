#include <stdio.h>
#include <stdlib.h>

void NhapSo();
void Gt_Tb();
void So_Nho_Hon_Tb(int *pNum);
void Sap_Xep(int* pNum);

float trung_binh;

int main()
{
    int Num[10];
    NhapSo(&Num);
    Gt_Tb(&Num);
    So_Nho_Hon_Tb(&Num);
    Sap_Xep(&Num);
}

void NhapSo(int* pNum)
{
    printf("nhap 10 so:");
    for (int i=0; i<10; i++)
        scanf("%d",(pNum + i));
}

void Gt_Tb(int* pNum)
{
    int sum = 0;
    for (int i=0; i<10; i++)
        sum = sum + *(pNum + i);
    printf("gt trung binh: %2.2f\n", (float)sum/10);
    trung_binh = (float)sum/10;
}

void So_Nho_Hon_Tb(int *pNum)
{
    printf("cac so nho hon tb:\n");
    for (int i=0; i<10; i++)
    {
        if (*(pNum+i)<trung_binh)
            printf("Num[%d] = %d\n",i,*(pNum+i));
    }
}

void Sap_Xep(int* pNum)
{
    for (int i=0; i<10; i++)
    {
        for(int j=i+1; j<10; j++)
        {
            if (*(pNum+i) % 2 != 0 && *(pNum+j) % 2 == 0)
            {
                int doi_cho = *(pNum+j);
                *(pNum+j) = *(pNum+i);
                *(pNum+i) = doi_cho;
            }
        }
    }
    printf("mang sau sap xep:\n");
    for (int i=0; i<10; i++)
        printf("%d\n", *(pNum+i));

}
/*    int Num_temp[10] = {0};
    int temp;
    temp=0;
    for (int i=0; i<10; i++)
    {
        if ((*(pNum+i)) % 2 == 0)
        {
            Num_temp[temp] = *(pNum+i);
            temp++;
        }
    }
    temp=9;
    for (int i=9; i>=0; i--)
    {
        if((*(pNum+i)) % 2 == 1)
        {
            Num_temp[temp] = *(pNum + i);
            temp--;
        }
    }
    printf("mang sau sap xep:\n");
    for (int i=0; i<10; i++)
        printf("%d\n", Num_temp[i]);
}*/




