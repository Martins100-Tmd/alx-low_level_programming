#include <stdlib.h>
#include "main.h"
/*
 * create_array - Write a function that creates an array of chars, and initializes it with a specific char.
 * @size - input size
 * @c - input c
 * Return : char
 * */

char *create_array(unsigned int size, char c)
{
	unsigned int i=0;

	char *ar;

	if (size != 0)
	{
		ar = malloc(size * sizeof(char));
	}
	else{
		return (NULL);
	}

	if (ar == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	return (ar);
}