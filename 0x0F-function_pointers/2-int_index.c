#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: integer array.
 * @size: array size.
 * @cmp: pointer to function
 * to compare values.
 *
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
