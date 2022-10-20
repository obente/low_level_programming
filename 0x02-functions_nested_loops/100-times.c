#include "main.h"
#include <stdio.h>

/**
 * times_table - n times table
 *
 * @n: parameter
 * 
 * Returns: void
 */

void times_table(int n)
{
	int a, b;
	
	if (n > 15 || n < 0)
		return
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			if (b == 0)
				printf("0,");
			else if (b == n)
				printf("%4d\n", a * b);
			else
				printf("%4d,", a * b);
		}
	}
}
