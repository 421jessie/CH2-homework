#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	for (i = 1; i < 4; i++)
	{
		if (i % 2 == 1)
		{
			printf("++++++++++++\n");
		}
		else
		{
			printf("+          +\n");
		}
	}
	return 0;
}