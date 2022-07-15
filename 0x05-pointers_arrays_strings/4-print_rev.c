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
	int len, i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	int I = i + 1;
	for (len = I; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	
	_putchar('\n');
}
