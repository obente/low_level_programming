#include <stdlib.h>
#include "main.h"

/**
 * array_range - range of integers
 * @min: lower range
 * @max: higher range
 * Return: pointer to integer
 */

int *array_range(int min, int max)
{
	int *ptr, i, _range;

	if (min > max)
		return (NULL);

	_range = max - min + 1;
	ptr = malloc(sizeof(int) * _range);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < _range; i++)
		ptr[i] = min + i;

	return (ptr);
}
