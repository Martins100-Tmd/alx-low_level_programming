#include "main.h"

/**
 *strlen_recursion - print the length of a string
 *@s - memory to be counted
 *Return:void
 */

int _strlen_recursion(char *s)
{
	if(*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
