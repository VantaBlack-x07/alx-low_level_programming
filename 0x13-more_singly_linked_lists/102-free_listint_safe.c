#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a linked list of integers.
 *
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *node;
	size_t count = 0;

	while (*h != NULL)
	{
		node = *h;
		*h = (*h)->next;
		free(node);
		count++;

		if (node <= *h)
			break;
	}

	*h = NULL;

	return (count);
}
