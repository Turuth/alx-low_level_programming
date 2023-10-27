#include "main.h"

/**
 * get_endianness - check'sif a machine is little or big endine
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
