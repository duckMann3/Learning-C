#include<stdio.h>
#include<stdbool.h>

// Bit Flags with MACROS: 
typedef unsigned int t_flag;
#define FLAG_A(1 << 0)
#define FLAG_B(1 << 1)
#define FLAG_C(1 << 2)

// Bit Flags with ENUM: 
typedef enum
{
    FLAG_A = (1 << 0),
    FLAG_B = (1 << 1),
    FLAG_C = (1 << 2)
}t_flag;

// Without Bit Flags:
int foo(int x, bool isAdded, bool isSquarred, bool isNot)
{
    if(isAdded)
        x += x;
    if(isSquarred)
        x *= x;
    if(isNot)
        x = ~x;
    return x;
}

// With Bit Flags:
int bar(int x, t_flag flags)
{
    if(flags & FLAG_A)
        x += x;
    if(flags & FLAG_B)
        x *= x;
    if(flags & FLAG_C)
        x = ~x;
    return x;
}

int main(void)
{
    printf( "%d\n",foo(1234, false, false, false));
    printf( "%d\n",foo(1234, true, false, false));
    printf( "%d\n",foo(1234, false, true, true));
    print("\n");
    printf( "%d\n",bar(1234, 0));
    printf( "%d\n",bar(1234, FLAG_A));
    printf( "%d\n",bar(1234, FLAG_B | FLAG_C));
    return 0;
}
