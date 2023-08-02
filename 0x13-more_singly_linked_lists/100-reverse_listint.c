#include "lists.h"
#include <stddef.h>

/**
 * reverse_listint - function that reverses a listint_t linked list.
 *
 * @head: pointer to the head of the list
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node = NULL,
		  *prev_node = NULL,
		  *next_node = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	current_node = *head;

	while (current_node)
	{
		next_node = current_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = next_node;
	}
	*head = prev_node;

	return (*head);
}
