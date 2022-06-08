#include "main.h"
/**
*_islower - returns 1 when value is lower case and return 0 if else
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
