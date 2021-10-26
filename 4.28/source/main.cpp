#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, b1, c, d, r;
	int i;
	printf("enter each own pay code(-1 to end):\n");
	scanf_s("%d", &i);

	while (i != -1)
	{
		switch(i)
		{
			case 1:
			{
				printf("enter fixed weekly salary:\n");
				scanf_s("%f", &a);
				r = a;
				printf("the employee's weekly pay:%f", r );
				printf("\n");
			}
			break;
			case 2:
			{
				printf("enter work hours for each day:\n");
				scanf_s("%f", &b);
				printf("enter hourly rate:\n");
				scanf_s("%f", &b1);
				if (b > 40)
				{
					r = (40 * b1) + (b - 40) * 1.5 * b1;
				}
				else
				{
					r = b * b1;
				}
				printf("the employee's weekly pay:%f", r * 7);
				printf("\n");
			}
			break;
			case 3:
			{
				printf("enter their gross weekly salary:\n");
				scanf_s("%f", &c);
				r = 250 + (c * 0.057);
				printf("the employee's weekly pay:%f", r );
				printf("\n");
			}
			break;
			case 4:
			{
				printf("enter a fixed amount money of items them produce for a week:\n");
				scanf_s("%f", &d);
				r = d;
				printf("the employee's weekly pay:%f", r );
				printf("\n");
			}
			break;
		}
		printf("\n");
		printf("enter each own pay code(-1 to end):\n");
		scanf_s("%d", &i);
	}
	return 0;
}