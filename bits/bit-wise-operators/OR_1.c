#include<stdio.h>
int equal(int x, int y);

int main(int argc, char* argv[])
{
	// for(int i = 0; i < argc; i++)
	// {
	// 	printf("%s\n", argv[i]);
	// }
	if(argv[1] == NULL && argv[2])
		printf("Not Enough Args\n");
	else
	{
		for(int i = 1; i < argc; i++)	
			printf("%s\n", argv[i]);
	}
	return 0;
}
