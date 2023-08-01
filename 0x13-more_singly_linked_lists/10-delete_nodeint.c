#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a
 * listint_t linked list.
 *
 * @head: Pointer to a pointer to the head of the list.
 * @index: the index of the node to be deleted
 *
 * Return: 1 if the deletion is successful, or -1 if it fails.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	node = *head;
	for (i = 0; i < index - 1 && node->next != NULL; i++)
	{
		node = node->next;
	}

	if (i != index - 1 || node->next == NULL)
	{
		return (-1);
	}

	tmp = node->next;
	node->next = tmp->next;
	free(tmp);

	return (1);
}
