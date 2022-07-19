#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to a list
 * @index: position of the nth node
 * Return: list address
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0 && head != NULL)
	{
		return (head->n);
	}

	if (index > 0)
	{
		temp = head;
		for (; i <= n && temp != NULL; i++)
		{
			temp = temp->next;
		}

		if (temp == NULL)
		{
			return (NULL);
		}
	}
	return (temp);
}
