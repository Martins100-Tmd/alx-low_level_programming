#include "lists.h"
/**
 * add_dnodeint - add node to the beginning of a list
 *
 * @head: double pointer to the list
 *
 * @n: integer to be added to a list
 *
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *help = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (help == NULL)
	{
		help = new;
		return (new);
	}
	help->prev = new;
	new->next = help;
	help = new;
	return (new);
}
