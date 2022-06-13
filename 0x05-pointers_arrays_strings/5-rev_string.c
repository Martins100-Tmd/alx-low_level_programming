#include "main.h"
/**
 *rev_string - prints a string in reverse order
 *@s: A pointer to an int that will be changed
 *
 *Return: void which means our answer is correct
 */
void rev_string(char *s)
{
    int i;

    while (s[i] != 0)
    {
        i++;
    }

    for (i = i - 1; i >= 0; i--)
    {
        _putchar(s[i]);
    }
}	
