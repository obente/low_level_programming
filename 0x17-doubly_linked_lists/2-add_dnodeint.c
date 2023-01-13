#include "lists.h"

/**
 * add_dnodeint - add a new node to linkedlist beginning
 * @head: head  of list
 * @n: integer to be added
 * Return: address of structure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	h = *head;
	
	if (h != NULL)
	{	
		while (h->prev != NULL)
			h = h->prev;
	} 

	new_node->next = h;

	if (h != NULL)
		h->prev = new_node;

	*head = new_node;

	return (new_node);
}
