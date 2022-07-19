#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_listint - prints all the element of a node list
 *
 * @h - new listint_t
 *
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *new = h;

	size_t count = 0;

	while (new != NULL)
	{
		printf("%d\n",new->n);
		count++;
		new=new->next;
	}

	return (count);
}
