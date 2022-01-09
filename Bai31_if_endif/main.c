#include <stdio.h>

//#define stm32f1
//#define stm32f4

int main()
{
#if !defined(stm32f1) && !defined(stm32f4)
    #warning "no macro defined"
#endif
printf("chao");
#if defined(stm32f1) && defined(stm32f4)
    printf("code cho STM\n");
#endif

#if  defined(stm32f1)
    #ifdef  stm32f4
        printf("code cho STM\n");
    #endif
#endif
}