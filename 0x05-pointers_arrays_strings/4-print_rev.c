#include "main.h"

/**
 * print_rev - print string
 * @s: string to be reversed
 * Return: nothing
 */

void print_rev(char *s)
{
	int i,j;
	i = 0;

	while (s[i] != '\0')
		i++;
	
	
	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
}
