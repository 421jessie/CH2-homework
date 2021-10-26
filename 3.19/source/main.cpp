#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d;

	printf("enter loan principal(-1 to end):\n");
	scanf_s("%f", &a);

	while (a != -1)
	{
		printf("enter interest rate:\n");
		scanf_s("%f", &b);
		printf("enter term of the loan in days:\n");
		scanf_s("%f", &c);

		d = a * b * c / 365;
        printf("the interest charge is:%f",d);


		printf("\n");
		printf("\n");
        printf("enter account number(-1 to end):\n");
		scanf_s("%f", &a);
	}



	return 0;
}