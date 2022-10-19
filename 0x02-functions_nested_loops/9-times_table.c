#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: void (Success)
 */

void times_table(void)
{
	int col, product, tens, ones;
	int row = 0;

	while (row <= 9)
	{
		for (col = 0; col <= 9; col++)
		{
			product = row * col;
			tens = product / 10;
			ones = product % 10;

			if (col == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		row++;
		_putchar('\n');
	}
}
