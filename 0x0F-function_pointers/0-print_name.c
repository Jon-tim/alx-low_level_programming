#include "function_pointers.h"
/**
 * print_name - print name
 * @name: name to be printed
 * @f: function pointer to print name
 * Return: printed name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
