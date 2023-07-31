#include "main.h"

/**
 * _strspn - Function looks for the length of a prefix substring
 * @accept: The string with a list of characters to match in s
 *  @s: The string to be searched
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, k, l, flag;

	l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				l++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (l);
		}
	}

	return (0);
}
