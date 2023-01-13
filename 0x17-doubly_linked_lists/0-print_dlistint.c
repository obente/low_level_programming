#include "lists.h"

/**
 * print_dlistint - prints all element of linkedlist
 * @h: lead of list
 * Return: count of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h->next != NULL)
	{
		printf("%i\n", h->n);
		count++;
		h = h->next;
	}

	printf("%i\n", h->n);
	count++;
	return (count);
}
