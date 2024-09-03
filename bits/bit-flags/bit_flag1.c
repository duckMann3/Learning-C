#include<stdio.h>
const unsigned int male = 0x1;
const unsigned int canadian = 0x2;
const unsigned int programmer = 0x4;

int main(void)
{
    int alan = male | canadian | programmer;
    int leanardo = programmer;
    if(leanardo & programmer)
    {
        printf("Yes!");
    }
    return 0;
}
