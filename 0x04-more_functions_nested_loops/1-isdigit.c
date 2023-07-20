#include "main.h"

/**
*_isdigit -shows 1 if the input is a digit value. Another cases, shows 0
*
*@c: The character in ASCII code
*
*Return: 1 for digit value . 0 for the rest.
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
