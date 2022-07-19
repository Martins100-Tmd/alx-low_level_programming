#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print the element of a node list
 *
 *@listint_t - struct format
 *
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *new = h;
	size_t count = 0;

	while (new != NULL)
	{

		if (new != NULL)
		{
			count++;
			printf("%d\n",new->n);
			new = new->next;
		}
	}
	return (count);
}

