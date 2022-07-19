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
	if (head == NULL)
	{
		return (NULL);
	}
	for (; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
