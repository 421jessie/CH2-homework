#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c;
	printf("enter # of hours worked(-1 to end):\n");
	scanf_s("%f", &a);

	while (a != -1)
	{   
		printf("enter hourly rate of worker:\n");
		scanf_s("%f", &b);

		if (a <= 40)
		{
            c = a * b;
		    printf("salarys is:%f", c);
		}
		else
		{
			c = (40 * b) +((a - 40)*(b / 2));
			printf("salarys is:%f", c);
		}

		printf("\n");
		printf("\n");
		printf("enter # of hours worked(-1 to end):\n");
		scanf_s("%f", &a);

	}
	return 0;
}