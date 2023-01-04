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
	size_t count = size;

	if (!array)
		return (-1);
	size = size + 1;

	while (--size)
	{
		size_t curr = count - size;

		printf("Value checked array[%ld] = [%d]\n", curr, array[curr]);
		if (array[count - size] == value)
			return (count - size);
	}
	return (-1);
}

