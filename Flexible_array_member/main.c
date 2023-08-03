

#include <stdio.h>
#include <malloc.h>

struct s {
    int arraySize;          //4 byte
    int array[];            //flexible
};

int mang[] = {};

int main()
{
    int desiredSire = 5;
    struct s *ptr;

    ptr = malloc( sizeof(struct s) + desiredSire * sizeof(int) );
    printf("%d\n", sizeof(struct s));
    printf("%d\n", sizeof(mang));
    printf("%d\n", ptr);
    printf("%d", ptr+1);
    
    return 0;
}