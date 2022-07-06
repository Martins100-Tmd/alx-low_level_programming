#include <stdio.h>

/**
 * int_index - function to search for an integer
 * array - array to be iterated
 * size - size of array
 * cmp - function pointer
 * Return : No return
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, counter = 0;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				counter++;

				return (i);
			}
		}
	}

	if (size <= 0 || counter == 0)
	{
		rteurn (-1);
	}
	else
	{
		return (0);
	}
}
