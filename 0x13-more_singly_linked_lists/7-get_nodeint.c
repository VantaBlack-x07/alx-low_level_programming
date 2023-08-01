#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that returns
 * the nth node of a listint_t linked list.
 *
 * @head: pointer to the head of the list.
 * @index: list index to where the node should point to.
 *
 * Return: the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	for (tmp = head; tmp != NULL; tmp = tmp->next)
	{
		if (i == index)
		{
			return (tmp);
		}

		i++;
	}

	return (NULL);
}
