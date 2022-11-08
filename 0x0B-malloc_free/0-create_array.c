#include "main.h"

/**
 * create_array - print array of characters
 * @size: size of array
 * @c: character to fill up array with
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return ('\0');
	
	int i;
	char * p = (char *)malloc(sizeof(c) * size);

	if (p == '\0')
		return ('\0');

	for(i = 0; i < size; i++)
		*(p + i) = c;

	return (p);
}
