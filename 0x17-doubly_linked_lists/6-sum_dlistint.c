#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the data (n)
 * of a dlistint_t linked list.
 *
 * @head: Head of the linked list.
 *
 * Return: The sum or 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head;
	unsigned int sum = 0;

	if (!head)
		return (0);

	while (cur)
	{
		sum += cur->n;
		cur = cur->next;
	}
	return (sum);
}
