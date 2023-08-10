#include "main.h"

/**
 * malloc_checked - allocates the memory using malloc.
 * Description: If malloc fail terminate process with status 98.
 * @b: unsignesint memory size to allocate
 * Return: void pointer to malloc'd memory space
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
