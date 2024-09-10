#include<stdio.h>
// What's the difference between char[] & char* in C?
int main()
{
  // Arrya of Characters:
  char s[] = "MOW";
  printf("%lu\n", sizeof(s));
  s[0] = 'j';
  printf("%s\n", s);

  // Pointer to a Character (String Literal):
  char* d = "MOW";
  printf("%lu", sizeof(d));
  return 0;
}
