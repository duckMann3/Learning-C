#include<stdio.h>

int main(void)
{
    int a = 3;
    int* ptr_a = &a;
    void* void_ptr = &a;

    printf("%p\n", void_ptr);
    printf("%d\n", *(int*)void_ptr);

    return 0;
}
