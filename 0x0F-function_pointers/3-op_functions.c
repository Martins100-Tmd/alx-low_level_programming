#include <stdio.h>
#include <stdlib.h>

/**
 * @num1 - first integer to be added 
 * @num2 - second integer to be added
 * op_add - add two ints
 * Return : integer
 */

int op_add(int num1, int num2)
{
	return (num1 + num2);
}

/**
 * @num1 - first integer to be added
 * @num2 - second integer to be added
 * op_sub - subtract two ints
 * Return : integer
 */
int op_sub(int num1, int num2)
{
	return (num1 - num2);
}

/**
 * @num1 - first integer to be added
 * @num2 - second integer to be added
 * op_mul - multiply two ints
 * Return : integer
 */
int op_mul(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * @num1 - first integer to be added
 * @num2 - second integer to be added
 * op_div - divides two ints
 * Return : integer
 */
int op_div(int num1, int num2)
{
	if (num2 == 0)
	{
		return (Error);
		exit(100);
	}
	return (num1 / num2);
}

/**
 * @num1 - first integer to be added
 * @num2 - second integer to be added
 * op_mod - return remainder
 * Return : integer
 */
int op_mod(int num1, int num2)
{
        if (num2 == 0)
	{
		return (Erro);
		exit(100);
	}
	return (num1 % num2_);
}

