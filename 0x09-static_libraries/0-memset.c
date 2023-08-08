#include "main.h"
/**
 * _memset - fill memory with constant bytes,
 * @s: memory areas.
 * @b: constant bytes.
 * @n: bites filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
