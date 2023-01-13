#include "lists.h"

/**
 * sum_dlistint - sums numbers in linkedlist
 * @head: head of the list
 * Return: sum of numbers
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
	}

	return (sum);
}
