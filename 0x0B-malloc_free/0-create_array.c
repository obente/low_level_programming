#include "main.h"
#include <stdlib.h>

/**
 * create_array - print array of characters
 * @size: size of array
 * @c: character to fill up array with
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return ('\0');

	p = malloc(sizeof(c) * size);

	if (*p == '\0')
		return ('\0');

	for (i = 0; i < size; i++)
		*(p + i) = c;

	return (p);
}
