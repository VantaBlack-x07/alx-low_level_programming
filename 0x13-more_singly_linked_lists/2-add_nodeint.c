#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

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
