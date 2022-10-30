#include "main.h"

/**
 * print_square - funtion printssquare shape
 * @n: size of square
 * Return: Nothing
 */

void print_square(int n)
{
	if (n > 0)
	{
		int i, j;

		for (j = 0; j < n; j++)
		{
			for (i = 0; i < n; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
