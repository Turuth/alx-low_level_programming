#include "main.h"

/**
 * _puts - print string, and a new line,
 * @str: pointer's to the string to print
 * Return: null
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
