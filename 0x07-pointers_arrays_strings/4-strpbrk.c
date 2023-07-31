#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - The function finds the first occurrence in the string s
 * @accept : String containing bytes being searched
 * @s : The string being searched for
 *
 * Return: pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
