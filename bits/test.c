/***********************************************************
 * 
 * About the different types of C integers & their sizes:
 * 1. 16-bit 'short' integers
 * 2. 16-bit 'unsigned short' integers
 *
 ***********************************************************/

/* Little Reminder about Counting Binary: 
 * 0 - 0000
 * 1 - 0001
 * 2 - 0010
 * 3 - 0011
 * 4 - 0100
 * 5 - 0101
 * 6 - 0110
 * 7 - 0111
 * 8 - 1000
 *
 * */

#include<stdio.h>
void isKthBitSet(int n, int k);

int main()
{
  // Min: -32768, Max: 32768
  int n = 5, k = 1; // 5 - 0101, 1 - 0001
  // isKthBitSet(n, k);
  
  int z = 1;
  printf("%d\n", (1 << z)); // 1 - 0001, 1 - 0001 (Bit shift Left)
  printf("%d\n", (z >> 1)); // 1 - 0001, 1 - 0001 (Bit shift right)

  // unsigned short x = 0, y = 0; 
  // x = 280;
  // y = 65535;
  // y = (unsigned short)(x*y); 
  // printf("%d%10d\n",x, y);
  return 0;
}

void isKthBitSet(int n, int k)
{
  if(n & (1 << k))
      printf("SET\n");
  else
    printf("NOT SET\n");


}
