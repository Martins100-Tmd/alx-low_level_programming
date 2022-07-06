#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name's main
 * if: void function
 * frint - void function
 */

void frint(char *name)
{
	return (Name);
}

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
