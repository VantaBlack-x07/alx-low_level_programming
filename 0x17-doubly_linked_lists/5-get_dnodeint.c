#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a dlistint_t linked list
 *
 * @head: Head of the linked list.
 * @index: Index of the required nodei.
 *
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur = head;
	unsigned int i;

	for (i = 0; i < index && cur; i++)
	{
		cur = cur->next;
	}
	if (!cur)
		return (NULL);

	return (cur);
}
