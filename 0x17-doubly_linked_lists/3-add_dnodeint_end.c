#include "lists.h"

/**
 * add_dnodeint_end - add a new node to linkedlist end
 * @head: head  of list
 * @n: integer to be added
 * Return: address of structure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	h = *head;
	
	if (h == NULL)
		*head = new_node;
	else
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new_node;
		new_node->prev = h;
	}


	return (new_node);
}
