#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 *
 * @h: pointer to the head of the list.
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t count = 0;

	for (tmp = h; tmp != NULL; tmp = tmp->next)
	{
		printf("%i\n", tmp->n);
		count++;
	}

	return (count);
}
