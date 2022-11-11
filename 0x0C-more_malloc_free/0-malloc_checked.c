#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - creates memory using malloc
 * @b: memory size
 * Return: pointer to allocated mem.
 */

void *malloc_checked(unsigned int b)
{
	void *m = malloc(sizeof(int) * b);
	if (m == NULL)
		return (98);
	return (m);
}
