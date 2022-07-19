#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end
 *
 *@head: pointer to a list
 *
 *@n: number to be added
 *
 * Return: list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));

	new->next = NULL;

	new->n = n;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (*head);
}
