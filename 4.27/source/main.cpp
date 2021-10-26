#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int a, b, c;
	for (c = 1; c < 500; c++) 
	{
		for (a = 1; a < c; a++)
		{
			for (b = a + 1; b < c; b++)
			{
				if (a * a + b * b == c * c)
				{
                  printf("%d %d %d \n ", a, b, c);
			    }
					
			}
	    }
	}
	return 0;
}