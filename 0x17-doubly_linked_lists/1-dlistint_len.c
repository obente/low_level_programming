#include "lists.h"

/**
 * dlistint - count all elements of linkedlist
 * @h: lead of list
 * Return: count of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}

	count++;
	return (count);
}
