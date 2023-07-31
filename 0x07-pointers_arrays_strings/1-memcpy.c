#include "main.h"
/**
 * *_memcpy - Function copies memory area
 * @dest: The destination area of memory
 * @src: The area of memory to be copied from
 * @n: How many bytes to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
