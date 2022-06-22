#include "main.h"

/**
 *puts_recursion - prints a string
 *@s - block of memory to be filled
 *Return:void
 */
void _puts_recursion(char *s)
{
	int i;

	if(s[i] = '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s+1);
}
