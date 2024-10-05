#include<stdio.h>
#include<string.h>

typedef long long ll;		// Defining an alias using typdef	
typedef struct students		// Using typedef to define an alias for structure
{
  char name[50];
  char branch[50];
  int ID_number;
}stu;

int main(void)
{
  // Basic example of typedef: 
  ll var = 20;
  printf("%ld", var);	
  
  // typedef with strut:
  stu st;
  strcpy(st.name, "Name Lastname");
  strcpy(st.branch, "Computer Science and Engineering");
  st.ID_number = 108;
  
  printf("Name: %s\n", st.name);
  printf("Branch: %s\n", st.branch);
  printf("ID_number: %s\n", st.ID_number);
  return 0;
}
