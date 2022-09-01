#include "lists.h"
/**
 * dlistint_len - prints the number of  node in a dlistint list
 *
 * @h: pointer to a dlistint list
 *
 * Return: number of node in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
		return (count);

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
