#include "main.h"
/**
 * print_alphabetx10 - print alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int b = 0;
	while (b < 10)
	{
		char alp = 'a';
		while (alp <= 'z')
		{
			_putchar(alp);
			alp++;
		}
	_putchar('\n');
	b++;
	}
}
