#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

char mang[10000];
int main()
{
    int i=0;
    char c;
    do
    {
        c = getchar();
        if(c == 'd')
        {
            c = getchar();
            if(c == ' ')
            {
                printf("(uint32_t)&");
                do
                {
                    c = getchar();
                    printf("%c", c);
                    mang[i] = c;
                    i++;
                }
                while(c != ' ');
                printf(",\n");
                mang[i] = ',';
                i++;
                mang[i] = '\n';
                i++;
            }
        }
    }
    while(c != '@');
    printf("abcd\n");

    /*vi nhap dau enter nó sẽ chạy rồi, nên lưu các giá trị vào mảng rồi in sau- ở dưới là in ra màn hình kết quả cuối cùng*/
    for(int j=0; j<sizeof(mang); j++)
    {
        if(mang[j] == '\n')
        {
            printf("\n(uint32_t)&");
        }else
        printf("%c", mang[j]);
    }
}

