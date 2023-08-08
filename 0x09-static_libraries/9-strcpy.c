#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy the string pointedly to by src,
 * including the terminating null bytes, to the
 * buffer point6ed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer's to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
