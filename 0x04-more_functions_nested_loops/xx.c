#include "main.h"

/**
 * more_numbers - print nums 0 - 14
 * Return: nothing
 */

void more_numbers(void)
{
	char z;
	int i,j;

	z = 48;
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar('1');
			_putchar(z++);
			if (z == 58)
				z = 48;
		}
		_putchar('\n');
	}
}
