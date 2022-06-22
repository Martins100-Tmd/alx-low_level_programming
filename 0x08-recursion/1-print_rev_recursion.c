#include "main.h"

/**
 *print_rev_recursion - print string in reverse
 *@s - memory to be filled
 *Return : void
 */

void _print_rev_recursion(char *s)
{
	if(*s!='\0')
	{
		_putchar(*s);
		_print_rev_recursion(s+1);
	}
	_putchar('\n');
}
