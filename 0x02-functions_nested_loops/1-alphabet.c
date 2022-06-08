#include "main.h"
/**
 * print_alphabet - Prints lowercase alphabets
 *
 * Return: Always 0 (Success)
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
