#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Description - print lowercase alphabet using putchar
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 0; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
