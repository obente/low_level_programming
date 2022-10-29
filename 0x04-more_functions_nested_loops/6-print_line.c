#include "main.h"

/**
 * print_line - prints lines
 * @n: number of lines
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	if (n > 1)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');

}
