#include "main.h"
#include <stdio.h>

/**
 * times_table - 9 times table
 *
 * Returns: void
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (b == 0)
				printf("0,");
			else if (b == 9)
				printf("%3d\n", a * b);
			else
				printf("%3d,", a * b);
		}
	}
}
