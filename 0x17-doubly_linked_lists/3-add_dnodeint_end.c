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
	dlistint_t *cur, *new_node = malloc(sizeof(dlistint_t));
	
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	cur = *head;
	while (cur->next != NULL)
		cur = cur->next;

	cur->next = new_node;
	new_node->prev = cur;

	return (new_node);
}
