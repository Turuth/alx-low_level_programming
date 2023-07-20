#include "main.h"

/**
* _isupper -shows 1 if the input is uppercase character.Another case shows 0
*
*@c: the character in ASCII code
*
*Return: 1 for uppercase character. 0 for the rest.
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
