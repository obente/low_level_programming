#include "main.h"

/**
 * set_bit - set a bit
 * @n: n
 * @index: index
 * Return: 0 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
