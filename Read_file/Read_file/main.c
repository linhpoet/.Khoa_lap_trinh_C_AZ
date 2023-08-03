#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char c = '\0';
    FILE *fp;

    fp = fopen("myFile.c", "r");    //open the file

    if(fp == NULL)
    {
        printf("could not open myfile.c");
        return 1;
    }

    printf("Reading the file myFile.c");

    while(1)
    {
        c = fgetc(fp);  //reading the file
        if(c == EOF)
            break;
        printf("%c", c);
    }
    printf("close");
    fclose(fp);         //close the file

    return 0;
}
