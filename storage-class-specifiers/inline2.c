#include<stdio.h>
#include "inline1.h"

void use_it(void)
{
  printf("Global variable: %d\n", global_variable++);
}
