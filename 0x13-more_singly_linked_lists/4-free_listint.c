#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a list
 *
 * @head: pointer to list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *p, *q;

	p = head;

	while (p != NULL)
	{
		q = p->next;

		free(p);

		p = q;
	}
}
