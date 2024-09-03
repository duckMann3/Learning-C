#include<stdio.h>
#include<stdbool.h>

bool foo(int, int);
void bar();

int main(void)
{ 
	int x = 3, y = 3, z = 5, n = 0;
	bar();
	// printf("Result of 'foo': %s", foo(x,y) ? "True\n" : "False\n");
	// printf("Result of 'foo': %s", foo(x,z) ? "True\n" : "False\n");
	return 0;
}

bool foo(int a, int b)
{
	if(a & b)
		return true;
	return false;
} 

void bar()
{
	printf("%d\n", 1 << 1);
	printf("%d\n", 1 << 2);
	printf("%d\n", 1 >> 2);
}
