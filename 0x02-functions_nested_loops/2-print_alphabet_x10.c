#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 *
 * Description - print lowercase alphabet using putchar
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		int i;

		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);

		_putchar('\n');
		j++;
	}
}
