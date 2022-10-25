#include "main.h"

/**
 * print_rev - print string
 * @str: string to be reversed
 * Return: void
 */

void print_rev(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	while (i--)
		_putchar(str[i]);
		_putchar('\n');
}
