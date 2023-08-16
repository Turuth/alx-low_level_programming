#include "function_pointers.h"

/**
 * print_name - print names
 * @name: input names
 * @f: function pointers
 *
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
