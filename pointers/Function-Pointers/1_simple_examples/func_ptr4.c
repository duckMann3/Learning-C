/************************************************************
 *
 * Basics of Function Pointers - When & How to Use Them:
 * READ.ME: 
 * 1. Details the use of function pointers to avoid
 *  multiple checks
 *
*************************************************************/

#include<stdio.h>
#include<stdbool.h>
void makePizza(void) { printf("%s\n", "Make Pizza"); }
void bakeCake(void) { printf("%s\n", "Make Cake"); }
int main(void)
{
    bool b; unsigned int iWantPizza;
    scanf("%d",&iWantPizza);
    b = iWantPizza;

    void(*makeFood)(void) = iWantPizza ? makePizza : bakeCake;
    makeFood();
}
