#include "function_pointers.h"

/**
 * array_iterator - Executes a function as a parameter
 * @array: array passed
 * @size: Array size
 * @action: A pointer to the function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
