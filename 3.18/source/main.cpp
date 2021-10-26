#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
	float a, c;
	printf("enter sales in dollars(-1 to end):\n");
	scanf_s("%f", &a);

	while (a != -1)
	{	
		c = 500 + ((a/100)*9);
        printf("salary is:%f", c);
		printf("\n");
		printf("\n");
		printf("enter sales in dollars(-1 to end):\n");
		scanf_s("%f", &a);
	}
 return 0;
}