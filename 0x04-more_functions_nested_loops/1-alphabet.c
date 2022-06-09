#include "main.h"
/**
* print_alphabet -Prints lowercase alpbates
*
*Return: Always 0 (success)
*/

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;

	}
	_putchar('\n');

}
