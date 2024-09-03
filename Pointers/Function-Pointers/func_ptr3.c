/******************************************************
 *
 * Basics of Function Pointer from "Advanced-C" Videos:
 * This Program shows how to declare a simple function ptr
 * READ.ME:
 * 1. Function pointer array that calls several functions 
 * (add, subtract, multiply) based on 'scanf' input
 *
******************************************************/
#include<stdio.h>

void add(int a, int b)
{
    printf("Addition is %d\n", a + b);
}

void sub(int a, int b)
{
    printf("Subtraction is %d\n", a - b);
}

void mult(int a, int b)
{
    printf("Multiplication is %d\n", a * b);
}

int main(void)
{
    void (*fun_ptr_arr[])(int, int) = {add, sub, mult};
    unsigned int ch, a = 15, b = 10;

    printf("Enter: 0 for addition, 1 for subtraction, or 2 for multiplication\n");
    scanf("%d", &ch);

    if(ch > 2)
	return 0;
    (*fun_ptr_arr[ch])(a,b);

    return 0;
}

