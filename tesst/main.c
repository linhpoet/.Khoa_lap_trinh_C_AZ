#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    uint32_t x = 1234567;
    x = ~x;
    printf("%u", x);
}
