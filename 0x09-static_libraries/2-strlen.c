#include "main.h"

/**
 * _strlen - return the length of  string.
 * @s: input str turn.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
