#include "main.h"

/**
 * puts2 - skips and print stuff
 * @str: collects the str variable
 * Returns: nothing
 */


void puts(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
		i++;

	for (j = 0; j <= i; j+=2)
		_putchar(str[j]);

	_putchar('\n');
}
