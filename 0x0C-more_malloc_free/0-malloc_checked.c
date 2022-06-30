#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function that allocate memory
 * @b - size of memory allocated
 * Return:Pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
