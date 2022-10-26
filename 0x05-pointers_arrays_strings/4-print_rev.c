#include "main.h"
#include <string.h>
/**
 * print_rev - print string
 * @str: string to be reversed
 * Return: void
 */

void print_rev(char *str)
{
	int i;

	int length = strlen(str);
	
	for (i = length; i <= 0; i--)
	{
		_putchar(*(str + i));
	}
}
