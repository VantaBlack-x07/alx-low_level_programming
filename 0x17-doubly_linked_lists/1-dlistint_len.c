#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * in a linked dlistint_t list.
 *
 * @h: The head of the linked list.
 *
 * Return: The number of elementsi.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		count++;
	}

	return (count);
}
