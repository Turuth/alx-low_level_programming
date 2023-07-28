#include "main.h"

/**
* _strcat - joins the first string with second string.
* @dest: shows the destination.
* @src: shows the source.
* Return: pointer to dest.
*/
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';

	return (dest);
}
