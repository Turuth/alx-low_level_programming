#include "main.h"

/**
 * set_string - set the value of a pointer to the char
 * @s: pointer to pointer
 *
 * @to: pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
