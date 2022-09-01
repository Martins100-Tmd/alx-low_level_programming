#include "lists.h"
/**
 * add_dnodeint_end - add a node to the end of a list
 *
 * @head: double pointer to the list
 *
 * @n: integer to be added to the node
 *
 * Return: a list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *help = *head, *last;
	
	new = malloc(sizeof(dlistint_t));
	new->prev = NULL;
	new->next = NULL;
	new->n = n;

	if (help == NULL)
		help = new;
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		new->prev = last;
		last->next = new;
	}
	return (help);
}
