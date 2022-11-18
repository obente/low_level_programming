#include "function_pointer.h"

/**
 * print_name: function to print name
 * @name: name of the person
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
