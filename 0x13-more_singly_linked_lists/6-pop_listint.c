#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node
 * of a listint_t linked list, and returns
 *' the head node's data (n)
 *
 * @head: double pointer to the head of the list
 *
 * Return: the data of the deleted head node, or 0
 * if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data = 0;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (data);

}
