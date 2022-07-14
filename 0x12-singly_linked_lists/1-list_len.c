#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of element in a 
 * linked list
 *
 * @h - pointer to the list
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *First = h;

	size_t n = 0;

	while (First)
	{
		n = n + 1;
		First = First->next;
	}
	return (n);
}
