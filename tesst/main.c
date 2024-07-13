#include <stdio.h>
#include <string.h>
char input[] = "  Welcome   to    England  ";

void reverseString(char* input)
{
    /*  reverse string  */
    int length = strlen(input);
    for(int i=0; i<length/2; i++)
    {
        char c = input[length-1-i];
        input[length-1-i] = input[i];
        input[i] = c;
    }

    /*  reverse word in string  */
    int startword = 0;
    int endword = 0;
    for(int i=0; i<= length; i++)
    {
        if(input[i] == ' ' || input[i] == '\0')
        {
            int lengthword = endword - startword + 1;
            for(int j=0; j<lengthword/2; j++)
            {
                char c = input[endword-j];
                input[endword-j] = input[startword+j];
                input[startword+j] = c;
            }
            startword = i+1;
        }
        else
        {
            endword = i;
        }
    }

    // Remove leading and trailing spaces
    int i = 0, j = 0;
    while (input[j]) {
        if (!isspace((unsigned char)input[j]) || (j > 0 && !isspace((unsigned char)input[j - 1]))) {
            input[i++] = input[j];
        }
        j++;
    }
    input[i] = '\0';
}
int main()
{
    reverseString(&input);
    printf("%s\n", input);
    printf("hello world\n");
    return 0;
}
