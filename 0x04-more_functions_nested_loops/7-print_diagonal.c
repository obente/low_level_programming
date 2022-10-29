#include "main.h"

/**
 * print_diagonal - print diagonal lines
 * @n: number of lines
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int x;

		x = 0;
		while (x < i)
		{
			_putchar(' ');
			x++;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
