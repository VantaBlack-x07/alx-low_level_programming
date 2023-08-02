#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_listint_safe - Prints a linked list of integers.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node;
	size_t count = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		node = head;
		head = head->next;
		count++;

		if (node <= head)
			break;
	}

	if (head)
	{
		printf("-> [%p] %d\n", (void *) head, head->n);
		exit(98);
	}

	return (count);
}

