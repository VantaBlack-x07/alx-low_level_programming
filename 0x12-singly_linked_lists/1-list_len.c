#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - function that returns the number
 * of elements in a linked list_t list.
 *
 * @h: pointer to the head of the list.
 *
 * Return: the number of elements.
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
