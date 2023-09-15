#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list.
 *
 * @head: The head of the linked list.
 * @n: Value of the node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr = *head,  *new_node = malloc(sizeof(dlistint_t));

	if (!*head)
	{
		*head = new_node;
		return (*head);
	}

	if (!new_node)
		return (NULL);

	while (curr->next)
		curr = curr->next;

	new_node->n = n;
	curr->next = new_node;
	new_node->prev = curr;

	return (new_node);
}
