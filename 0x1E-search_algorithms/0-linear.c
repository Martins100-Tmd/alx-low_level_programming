#include "search_algos.h"
#include <stdlib.h>
/**
 * linear_search - search for a value in an array
 * using the Linear Search Algorithm
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
		{
			printf("Found %d at index: %d\n", array[i], i);
			return (i);
		}
		i++;
	}
	return (-1);
}

int main()
{
	int array[] = {
        	10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    	};
    	size_t size = sizeof(array) / sizeof(array[0]);
	linear_search(array, size, 42);
	return (0);
}
