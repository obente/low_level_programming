#include "lists.h"

/**
 * pop_listint - pop from list
 * @head: head
 * Return: poped item
 */

int pop_listint(listint_t **head)
{
	int h_node;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;
	h_node = current->n;
	h = current->next;

	free(current);
	*head = h;

	return (h_node);
}
