#include "function_pointers.h"
/**
 * @name - funtion argument name to be printed
 * f - function to return a name
 * print_name - function to print a name
 * Return: 0
 */

void f(char *Name)
{
	return (Name);
}

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
