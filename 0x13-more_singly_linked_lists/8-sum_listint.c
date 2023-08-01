#include <stdio.h>
#include "lists.h"

/**
 * listint_sum - function that returns the sum of
 * all the data (n) of a listint_t linked list.
 *
 * @head: pointer to the head of the list.
 *
 * Return: the sum of all the numbers of nodes.
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);

	for (tmp = head; tmp != NULL; tmp = tmp->next)
	{
		sum += tmp->n;
	}

	return (sum);
}
