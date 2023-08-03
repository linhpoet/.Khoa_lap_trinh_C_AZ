//#include "test_extern.h"

/*khong co hang nay, chuong trinh se khong chay*/
extern int u32ExternChecking;

void extern_check()
{
    extern int u32ExternChecking;
    u32ExternChecking = 10;
}

void extern_check2()
{
    u32ExternChecking = 100;
}
