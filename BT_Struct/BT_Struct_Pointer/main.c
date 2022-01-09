#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>
struct Sinhvien {
    char *name;
    uint16_t id;
    uint8_t age;
}Sv;

int main()
{
    printf("size of struct = %d\n",sizeof(Sv));
    Sv.name = "linh";
    Sv.id = 105;
    Sv.age = 20;
    printf ("%s\t%d\t%d\n",Sv.name, Sv.id, Sv.age);
    printf("&struct Sv = %d\t &Sv.name=%d\t&Sv.id=%d\t&Sv.age=%d\n\n",&Sv,&Sv.name,&Sv.id,&Sv.age);

    /*pointer khai bao bth, co size = sizeofchar = 1 byte*/
    char *ptr;
    ptr = &Sv;
    printf("pointer khai bao bth ptr = &Sv\n");
    printf("ptr= %d\t ptr=%d\tptr+30=%d\tptr+2=%d\n\n",ptr,ptr,ptr+30,ptr+32);

    /*pointer khai bao voi struct*/
    struct Sinhvien* Sptr;
    Sptr = &Sv;
    printf("pointer khai bao voi struct Sptr = &Sv\n");
    printf ("%s\t%d\t%d\n",Sptr->name, Sptr->id, Sptr->age);
    printf("ptr= %d\t ptr=%d\tptr+30=%d\tptr+2=%d\n\n",Sptr,&Sptr->name, &Sptr->id, &Sptr->age);

}
