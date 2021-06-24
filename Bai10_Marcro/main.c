#include <stdio.h>
#include <stdlib.h>

/*function marcro*/
#define Max(a,b)  ((a<b) ? (b) : (a))               //if (a<b) return a; else return b;

/*function bth*/
/*Max(int a, int b)
{
    return ((a<b) ? (b) : (a));
}
*/
main()
{
    printf("so lon: %d\n", Max(3,5));
    printf("so lon: %d\n", Max(7,5));

}
