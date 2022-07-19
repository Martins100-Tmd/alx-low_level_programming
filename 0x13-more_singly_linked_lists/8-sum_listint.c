#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of data
 *
 *@head - pointer to a list
 *
 * Return: int
 */

int sum_listint(listint_t *head)
{
	listint_t *new = head;
	int sum = 0;

	if (new == NULL)
	{
		return (0);
	}
	while (new != NULL)
	{
		sum += new->n;
		new = new->next;
	}

	return (sum);
}
