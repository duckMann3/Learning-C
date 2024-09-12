#include<stdio.h>
#include<string.h>
// What's the difference between char[] & char* in C?
int main()
{
  // Array of Chars:
  char s[] = "MOW";
  printf("Size of Array: %lu\n", sizeof(s));                // Prints the amount of memory in bytes the array occupies (3)
  s[0] = 'j';                                // Selects first index of array & changes it to 'j'
  printf("Changed Array: %s\n", s);                         // Print changed version of arrray

  // Pointer to a Char (String Literal):
  const char* d = "2FHH";
  printf("Size of Char-ptr: %lu\n", sizeof(d));                // Prints the amount of memory in bytes the char* occupies (8)
  printf("Length of Char-ptr: %ld", strlen(d));
  return 0;
}
