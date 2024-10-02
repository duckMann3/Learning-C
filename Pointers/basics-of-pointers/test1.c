#include<stdio.h> 

int main()
{
  int arr[4] = {1,2,3,4};
  int (*ptr)[4] = &arr;
  printf("%d", *(ptr[1]));
  return 0;
}
