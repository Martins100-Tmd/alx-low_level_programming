#include "main.h"

/**
 * _isdigit - Check if paramter c represents an digit.
 * @c: Int representing an ascii character
 * Return: Return 1 if it is a digit otherwise return 0.
 */
int _isdigit(int c)
{
	if ((c >=65 && c <= 90) || (c >= 97 && c <= 122))
		return (0);
	return (1);
}
