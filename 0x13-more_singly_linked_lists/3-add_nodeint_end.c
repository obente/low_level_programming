#include "lists.h"

/**
 * add_nodeint_end - add a node to the head of list
 * @head: head node
 * @n: integer to add
 * Return: address of added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x;
	listint_t *temp;

	(void)temp;

	x = malloc(sizeof(listint_t));

	if (x == NULL)
		return (NULL);

	x->n = n;
	x->next = NULL;
	temp = *head;

	if (*head == NULL)
		*head = x;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = x;
	}
	return (*head);
}
