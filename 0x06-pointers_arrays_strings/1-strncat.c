#include "main.h"

/**
* _strncat - combine two strings
* @dest: shows the destination
* @src: shows the source
* @n: shows n bytes from src
* Return: (dest)
*/
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';

	return (dest);
}
