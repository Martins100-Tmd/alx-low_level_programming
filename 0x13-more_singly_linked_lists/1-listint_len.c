#include <stdio.h>
#include "lists.h"
/**
 * listint_len - return number of element in a list
 *
 * @h: pointer to a list
 *
 * Return: int
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *new = h;
	int count = 0;

	while (new != NULL)
	{
		count++;
		new = new->next;
	}

	return (count);
}
