/**************************************************************
*
* Basics of Function Pointer from "Advanced-C" Videos:
* READ.ME:  
* 1. How to declare function pointer,
* 2. Function Pointer Arrays 
*
***************************************************************/
#include<stdio.h>
#include<stdbool.h>

bool p(int x)
{
    return (x % 2 == 0);
}

void print_if(int x[10], bool (*predicate)(int))
{
    for(int i = 0; i < 10; i++)
    {
	if(predicate(x[i]))
	{
	    printf("%d\n", x[i]);
	}
    }
}

void printif(int x[10])
{
    for(int i = 0; i < 10; i++)
    {
	if(p(x[i]))
	{
	    printf("%d\n", x[i]);
	}
    }
}

int main(void)
{
    int x[] = {1,2,3,4,5,6,7,8,9,10};
    printf("print_if calls function pointer: \n");
    print_if(x, p);
    printf("Same Result??? (Without function pointer): \n");
    printif(x);
    // int (*)(int, int) = foo;
    return 0;

}
