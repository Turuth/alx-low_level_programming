#include "main.h"

/**
* _strcmp - compare the first string with second string.
* @s1: shows first string
* @s2: shows second string
* Return: 0 if they are equal, another number if not
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, cp = 0;

	while (cp == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		cp = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (cp);
}
