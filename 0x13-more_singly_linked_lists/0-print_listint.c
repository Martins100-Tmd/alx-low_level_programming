#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the element of a node list
 *
 * @h: pointer to a list
 *
 * Return: int
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *new = h;
	int count = 0;

	while (new != NULL)
	{
		printf("%d\n", new->n);
		count++;
		new = new->next;
	}
	return (count);
}
