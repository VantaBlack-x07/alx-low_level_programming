#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * and sets the head to NULL
 *
 * @head: double pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		 tmp = *head;
		 *head = (*head)->next;
		 free(tmp);
	}

	*head = NULL;
}
