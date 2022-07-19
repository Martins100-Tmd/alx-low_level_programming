#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - add a node to the beginning
 *
 * @head: a double to a list
 *
 * @n: number to be added
 *
 * Return: a list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
