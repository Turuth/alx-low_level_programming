#include "main.h"

/**
 * *_memset - The functioon fills memory with a constant byte
 * @s: The area of memory to be filled
 * @b: character to be copied
 * @n: How many times b will be copied
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
