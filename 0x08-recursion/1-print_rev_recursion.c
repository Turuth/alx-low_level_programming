#include "main.h"
/**
 * _print_rev_recursion - Print the string in reverse.
 * @s: The string being printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
