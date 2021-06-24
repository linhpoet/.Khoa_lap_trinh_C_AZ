#include <stdio.h>
#include <stdlib.h>

char string[];
int main()
{
    printf("nhap string:");
    String_Input(&string);
    printf("length of string: %d\n", String_Length(&string));
    String_Reverse(&string);
    printf("%s", string);
}

/*hàm chuần, bỏ qua kí tự enter cuối string*/
String_Input(char* pString)
{
    char c;
    do
    {
        c = getchar();
        if (c != '\n')
        {
            *pString = c;
            pString++;
        }
    } while (c != '\n');
}

String_Length(char* pString)
{
    int length = 0;
    while (*pString != NULL)
    {
        length++;
        pString++;
    }
    /*add NULL*/
    length++;
    return length;
}


String_Reverse(char* pString)
{
    char *ptr1 = pString;
    char *ptr2 = pString + String_Length(&string) - 2;
    while (ptr1 < ptr2)
    {
        char temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2--;
    }
    printf("da dao nguoc:\n");
}
