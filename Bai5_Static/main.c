#include <stdio.h>
#include <stdlib.h>

/*phạm vi function này chỉ được sử dụng trong file main.c này*/
static void function_static(void);

/*phạm vi biến này chỉ được sử dụng trong file main.c*/
static int u32GlobalStatic = 10;
/*có thể sử dụng trong file .c khác thuộc project, nhưng phải khai báo extern int u32Global ở file đó */
int u32Global = 0;

int main()
{
    /*gọi lần đầu, biến u32Static được khởi tạo =1, và tăng thành 2*/
    function_static();
    /*gọi lần 2, biến u32Static vẫn lưu giá trị cũ = 2, và tăng thành 3*/
    function_static();
    printf("Hello world!\n");
    return 0;
}

static void function_static(void)
{
    /*pham vi biến này chỉ dược sử dụng trong function này*/
    /*ra khỏi function sẽ không sử dụng được biến này, nhưng cũng không bị mất đi*/
    /*giá trị KHỞI TẠO cho biến static phải là hằng số*/
    /*có thể gọi cả function để thay đổi giá trị*/
    static unsigned int u32Static = 1;
    //32Static = 1; không đúng
    u32Static ++;
    printf("u32Static = %d\n",u32Static);
}
