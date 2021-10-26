#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d;
	a = 5000;
	b = 0.1;

	for (c = 0; c < 15; c++)
	{
		d = (1 + b) * a;
		printf("insterest is:%f principal is:%f", b,d);

		b = b + 0.05;
		printf("\n");
	}

	return 0;
}