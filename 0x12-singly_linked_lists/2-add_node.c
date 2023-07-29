#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * add_node - function that adds a new node at
 * the beginning of a list_t list.
 *
 * @head: pointer to the head of the list.
 * @str: string that will be stored in new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);

	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);

	new->next = *head;
	*head = new;

	return (new);
}
