#include "main.h"

/**
* _puts - prints a string, followed by a new line.
*@str: input string
*Return: no return
*/
void _puts(char *str)
{
	int length = 0;

	while (length >= 0)
	{
		if (str[length] == '\0')
		{
			putchar('\n');
			break;
		}
		putchar(str[length]);
		length++;
	}
}
