#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: Head of the linked list.
 * @index: Index of the required node.
 * @n: Value of the new node.
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur = *h, *new_node = malloc(sizeof(dlistint_t));
	unsigned int i;

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		
		if (*h)
		{
			(*h)->prev = new_node;
		}

		*h = new_node;
		return (new_node);
	}

	for (i = 0; i < idx && cur != NULL; i++)
	{
		cur = cur->next;
	}

	if (!cur)
		return (NULL);

	new_node->prev = cur;
	new_node->next = cur->next;

	if (cur->next)
		cur->next->prev = new_node;

	cur->next = new_node;

	return (new_node);
}
