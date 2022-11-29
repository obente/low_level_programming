#include "lists.h"

/**
 * add_nodeint - add a node to the head of list
 * @head: head node
 * @n: integer to add
 * Return: address of added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));

	if (x == NULL)
		return (NULL);

	x->n = n;
	x->next = *head;
	*head = x;

	return (*head);
}
