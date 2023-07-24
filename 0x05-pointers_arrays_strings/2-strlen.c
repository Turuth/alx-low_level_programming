#include "main.h"

/**
* _strlen - return the length of a string
*@s: shows input string
*Return: length of string
*/
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}

	return (length);
}
