#include "main.h"
/**
 *man - evaluate function sqrt
 *@i: interger
 *@n: interger
 *Return: evaluate sqrt
 */
int man(int n, int i)
{
    if (i * i < n)
    {
        return (man(n, i + 1));
    }
    else if (i * i == n)
    {
        return (i);
    }
    else
    {
        return (-1);
    }
}
/**
 *_sqrt_recursion - evaluate sqrt
 *@n: interger
 *Return: Sqrt_recursion
*/
int _sqrt_recursion(int n)
{
	int i = 0;
	man(n, i);

	return (0);
}
