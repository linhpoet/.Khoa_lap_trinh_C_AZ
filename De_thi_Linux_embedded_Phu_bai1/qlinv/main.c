#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct
{
    char name[64];
    int salary;
}Sinhvien;
int n_student;

int main()
{
    printf("nhap so sv:");
    scanf("%d", &n_student);
    Sinhvien sv[n_student];
    Init(&sv);
    Output(&sv);
    int key = 0;
    while(1)
    {
        printf("1:xoa\n");
        printf("2:tim\n");
        scanf("%d", &key);
        switch (key)
        {
        case 1:
            deletes(&sv);
            break;
        case 2:
            Find(&sv);
            break;
        }
    }

}

void Init(Sinhvien* sv)
{
    for(int i=0; i<n_student; i++)
    {
        printf("nhap ten sv %d:", i);
        fflush(stdin);
        scanf("%[^\n]s", &(sv+i)->name);
        printf("nhap luong sv %d:", i);
        scanf("%d", &(sv+i)->salary);
    }
}

void deletes(Sinhvien *sv)
{
    printf("nhap ten sv muon xoa:");
    char del_sv[64];
    fflush(stdin);
    scanf("%[^\n]s", &del_sv);
    for(int i=0; i<n_student; i++)
    {
        if(strcmp(del_sv, &(sv+i)->name) == 0)
        {
            n_student--;
            for(int j=i; j<n_student; j++)
            {
                for(int k=0; k<64; k++)
                {
                    (sv+j)->name[k] = (sv+j+1)->name[k];
                }
                (sv+j)->salary = (sv+j+1)->salary;
            }
        }

    }
}

void Find(Sinhvien* sv)
{
    printf("nhap muc luong:");
    int find_salary;
    scanf("%d", &find_salary);
    for(int i=0; i<n_student; i++)
    {
        if(find_salary == (sv+i)->salary)
        {
            printf("%s\t%d\n", (sv+i)->name, (sv+i)->salary);
        }
    }
}

void Output(Sinhvien* sv)
{
    for(int i=0; i<n_student; i++)
    {
        printf("%s\t%d\n", (sv+i)->name, (sv+i)->salary);
    }
}
