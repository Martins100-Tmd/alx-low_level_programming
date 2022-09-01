#include "lists.h"
/**
 * print_dlistint - prints the number of node in a linked list
 * @h: pointer to a doubly linked list
 * Return: number of nodes in a linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
	return (count);

	if (h != NULL)
	{
		while (h)
		{i
			printf("%d\n", h->n);
			count++;
			h = h->next;
		}
		return (count);
	}
}
