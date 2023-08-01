#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node
 * at the beginning of a listint_t list
 *
 * @head: pointer to the head of the list
 * @n: value to be stored in the new node
 *
 * Return: address of the new element, or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}


/**
 * insert_nodeint_at_index - Inserts a new node with a given integer value
 * at a specified index of a singly linked list.
 *
 * @head: Pointer to a pointer to the head of the list.
 * @idx: the index where the new node should be inserted.
 * @n: Integer value to be stored in the new node.
 *
 * Return: Address of the new node,
 * or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	tmp = *head;
	for (i = 0; i < idx - 1 && tmp != NULL; i++)
		tmp = tmp->next;

	if (tmp == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
