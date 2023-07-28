#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - function that prints
 * all the elements of a list_t list.
 *
 * @h: pointer to the head of the list.
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		num++;
		h = h->next;
	}

	return (num);
}
