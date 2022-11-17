#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free mem
 * @d: strict dog
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
