#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  const char* d = "2FH.H";              // String Literal
  for(size_t i = 0; i < strlen(d); i++) // Iterates thrugh literal using 'strlen()' from 'string.h'
  {
    printf("%d\n", (int)*(d + i));      // Converts chars to ASCII
  }
  return 0;
}
