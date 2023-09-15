#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.	
 *
 * @head: The head of the linked list.
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;

	while (curr)
	{
		head = head->next;
		free(curr);
		curr = head;
	}
}
