#include "main.h"
/**
 * print_rev - prints a string in reverse
 *
 * @s: string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0, i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (len = i; len > 0; len--)
	{
		_putchar(s[len]);
	}
	
	_putchar('\n');
}
