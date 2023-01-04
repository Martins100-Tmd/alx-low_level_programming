#include "search_algos.h"

/**
 * linear_search - search for a value in an array
 * using the Linear Search Algorithm.
 * @array: array of integer values
 * @size: size of array
 * @value: value to find in array
 * Return: int
 */

int linear_search(int *array, size_t size, int value)
{

	if (!array)
		return (-1);
	int i = 0;

	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

