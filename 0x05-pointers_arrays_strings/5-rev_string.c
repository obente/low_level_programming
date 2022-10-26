#include "main.h"

/**
 * rev_string - print string
 * @s: string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
		i++;

	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
}
