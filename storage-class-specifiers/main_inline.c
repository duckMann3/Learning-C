#include "inline1.h"
#include "main_inline.h"
#include<stdio.h>

int main(void)
{
  use_it();
  // global_variable += 19;
  use_it();
  printf("Incremenet: %d\n", increment());
  return 0;
}
