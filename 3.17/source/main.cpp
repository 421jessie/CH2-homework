#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e, f;
	a = 1;

	printf("enter account number(-1 to end):\n");
	scanf_s("%f", &a);

	while (a != -1)
	{

		printf("enter begining balance:\n");
		scanf_s("%f", &b);
		printf("enter charges:\n");
		scanf_s("%f", &c);
		printf("enter credits:\n");
		scanf_s("%f", &d);
		printf("enter allowed credict limit:\n");
		scanf_s("%f", &e);

		

		f = b + c - d;
		if (f > e)
		{
			printf("account number:%f", a);
			printf("\n");
			printf("allowed credit limit:%f", e);
			printf("\n");
			printf("new balance:%f", f);
			printf("\n");
			printf("credit limit exceeded");
			printf("\n");

		}
		
		printf("\n");

		printf("enter account number(-1 to end):\n");
		scanf_s("%f", &a);
	}



	return 0;
}