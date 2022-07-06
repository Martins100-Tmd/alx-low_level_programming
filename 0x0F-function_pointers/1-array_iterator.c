#include "function_pointers.h"

/**
 * array_iterator - executes function on array elements
 * @array - array of element to be used
 * @size - size of array
 * action - function to be executed on array elements
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
