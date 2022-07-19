#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete a head node
 *
 *@head: pointer to list
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *new;

	if (*head == NULL)
		return (0);

	new = *head;

	*head = new->next;

	data = new->n;

	free(new);

	return (data);
}
