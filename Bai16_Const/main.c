#include <stdio.h>
#include <stdlib.h>

void constant();
void Pointer_to_Constant();
void Constant_Pointer();

int main()
{

}

void constant()
{
    /*neu khong gan gia tri thi u32constant = 0*/
    const int u32constant;

    /*khong the thay doi gia tri*/
    //u32constant = 10;

    /*co the dung pointer de thay doi gia tri bien const*/
    int *ptr = &u32constant;
    *ptr = 10;
    printf("u32constant = %d\n", u32constant);
}


/*không thể thay doi giá trị được lưu ở địa chỉ(giá trị của biến) mà pointer trỏ tới*/
/*có thể thay đổi địa địa chỉ mà pointer trỏ tới*/
void Pointer_to_Constant()
{
    int u32temp=5;
    const int *pPointertoConstant = &u32temp;
    //*pPointertoConstant = 5;
    pPointertoConstant++;
    printf("u32temp = %d va dia chi u32temp = %d\n", *pPointertoConstant, pPointertoConstant);
}


/*có thể thay đổi giá trị ở địa chỉ mà pointer trỏ tới*/
/*nhưng không thể thay đổi địa chỉ mà ponter trỏ tới*/
void Constant_Pointer()
{
    int u32temp = 10;
    int *const pConstantPointer = &u32temp;
    *pConstantPointer = 5;
    //pConstantPointer ++;
}
