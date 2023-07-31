#include "main.h"

/**
* _memset -fills memory with a constant byte
* @s: memory area
* @b:constant byte
* @n: bytes filled
* Return: pointer to the memory area (s)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/*Fill memory area with the constant bytes 'b' */
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	/*Return the pointer to the memory are 's' */
	return (s);
}
