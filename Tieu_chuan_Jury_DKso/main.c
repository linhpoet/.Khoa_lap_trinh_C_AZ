#include <stdio.h>
#include <stdlib.h>

int main()
{
    Mu3();
    printf("Hello world!\n");
    return 0;
}

void Mu3()
{
    printf("nhap:");
    float BangJury[7][4] = {0};
    scanf("%f%f%f%f",&BangJury[0][0],&BangJury[0][1],&BangJury[0][2],&BangJury[0][3]);
    BangJury[1][3] = BangJury[0][0];
    BangJury[1][2] = BangJury[0][1];
    BangJury[1][1] = BangJury[0][2];
    BangJury[1][0] = BangJury[0][3];

    BangJury[2][0] = BangJury[3][2] = (BangJury[0][0]*BangJury[1][3]-BangJury[1][0]*BangJury[0][3])/BangJury[0][0];
    BangJury[2][1] = BangJury[3][1] = (BangJury[0][0]*BangJury[1][2]-BangJury[1][0]*BangJury[0][2])/BangJury[0][0];
    BangJury[2][2] = BangJury[3][0] = (BangJury[0][0]*BangJury[1][1]-BangJury[1][0]*BangJury[0][1])/BangJury[0][0];

    BangJury[4][0] = BangJury[5][1] = (BangJury[2][0]*BangJury[3][2]-BangJury[3][0]*BangJury[2][2])/BangJury[2][0];
    BangJury[4][1] = BangJury[5][0] = (BangJury[2][0]*BangJury[3][1]-BangJury[3][0]*BangJury[2][1])/BangJury[2][0];

    BangJury[6][0] = (BangJury[4][0]*BangJury[5][1]-BangJury[4][1]*BangJury[5][0])/BangJury[5][1];
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<4;j++)
            printf("%0.3f\t\t",BangJury[i][j]);
            printf("\n");
    }
}

void Mu2()
{
    printf("nhap:");
    float BangJury[5][3] = {0};
    scanf("%f%f%f",&BangJury[0][0],&BangJury[0][1],&BangJury[0][2]);
    BangJury[1][2] = BangJury[0][0];
    BangJury[1][1] = BangJury[0][1];
    BangJury[1][0] = BangJury[0][2];

    BangJury[2][0] = BangJury[3][1] = (BangJury[0][0]*BangJury[1][2]-BangJury[1][0]*BangJury[0][2])/BangJury[0][0];
    BangJury[3][0] = BangJury[2][1] = (BangJury[0][0]*BangJury[1][1]-BangJury[0][1]*BangJury[1][0])/BangJury[0][0];
    BangJury[4][0] = (BangJury[2][0]*BangJury[2][0]-BangJury[2][1]*BangJury[2][1])/BangJury[2][0];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
            printf("%0.3f\t\t",BangJury[i][j]);
            printf("\n");
    }
}


void BangRouth()
{

}
