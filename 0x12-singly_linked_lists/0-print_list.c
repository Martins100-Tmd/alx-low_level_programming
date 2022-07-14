#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all element of a list
 * h - struct
 */
size_t print_list(const list_t *h)
{
	const list_t First = h;

	int counter = 0;

	while (First != NULL)
	{
		if (First->str != NULL)
		{
			printf("[%d] %s\n", First->len, First->str);
		}
		else
		{
			printf("[0] nil\n");
		}

		counter +=1;
		First=First->next;
	}

	return (counter);
}
