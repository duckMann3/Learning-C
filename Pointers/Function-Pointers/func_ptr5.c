/********************************************************
*
* "Function Pointers in C Programming
* with Examples"
*
*********************************************************/
#include<stdio.h>
void swap(int* a, int* b); // Function Pointers Example
int add_array(int* p, int num_elements); // Functions with Array Parameters
int* build_array(); // Functions that Return an Array
int* test();

int main(void)
{
  int m = 25, n = 100;
  printf("m is %d, n is %d\n", m, n);
  swap(&m, &n);
  printf("m is %d, n is %d\n", m, n);

  printf("\n");

  int Tab[5] = {100, 220, 37, 16, 98};
  printf("Total summation is %d\n", add_array(Tab,5));

  int* a = build_array();
  for(int k = 0; k < 5; k++)
    printf("%d\n", a[k]);
  printf("\n");

  int* b = test();
  int c = b[0];
  printf("%d\n", c);
  return 0;
}

void swap(int* a, int* b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int add_array(int* p, int num_elements)
{
  int total = 0, k;
  for(k = 0; k < num_elements; k++)
  {
    total += p[k];
  }
  return total;
}

int* build_array()
{
  static int Tab[5] = {1,2,3,4,5};
    return Tab;
}

int* test()
{
  static int Tab[5] = {3,4,61,7};
    return Tab; 
}





