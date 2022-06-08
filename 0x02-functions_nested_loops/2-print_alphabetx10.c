#include "main.h"
/**
 * 2-print_alphabetx10.c - print alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int b = 0;

	while (b < 10)
	{
		char c = 'a';
		
		while (c <= 'z')
		{
			_putchar(c);
			c++;

		}
	_putchar('\n');

}
