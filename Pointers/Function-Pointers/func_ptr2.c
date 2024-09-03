/***********************************************************
 *
 * This Program shows how to declare a simple function ptr
 *
 *
************************************************************/


#include<stdio.h>
// A normal function with an int parameter & void return type:
void foo(int a) { printf("With '&' %d\n", a); }
void bar(int b) { printf("Without '&' %d\n", b); }

int main()
{
    // fun_ptr is a pointer toa function fun()
    void (*fun_ptr1)(int) = &foo;
    (*fun_ptr1)(10);

    void (*fun_ptr2)(int) = bar;
    fun_ptr2(10);

    return 0;
}

