#include<stdio.h>

typedef int(*Operation)(int, int);
int add(int a, int b) { return a + b; }
int subtracts(int a, int b) { return a - b; }

int main(void)
{
  Operation operationAdd = add;
  Operation operationSubtract = subtracts;
  printf("Addition result: %d\n", operationAdd(20,9));
  printf("Subtraction result: %d\n", operationSubtract(20,9));

  return 0;
}
