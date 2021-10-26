#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, k;

	printf("(A)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < i; j++)
		{
            printf("%s", "*");
		}
		printf("\n");
	}

	printf("(B)\n");
	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < (10-i); j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}

	printf("(C)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{   
			printf(" ");
		}

		for(j = 10;j>i; j--)
		{
			 printf("%s", "*");
		}
		printf("\n");
	}

	printf("(D)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 9; j > i; j--)
		{
			printf(" ");
		}

		for (k = 0; k <= i; k++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}

	return 0;
}