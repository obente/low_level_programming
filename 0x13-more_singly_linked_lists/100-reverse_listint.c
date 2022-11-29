#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: head
 * Return - 1st node
 */

listint_t *reverse_listing(listint_t **head)
{
	listint_t *p, *n;

	p = n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}
	
	*head = p;
	return (*head);
}
