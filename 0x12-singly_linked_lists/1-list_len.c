#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return'sthe number of elements in a linked list
 * @h: pointer to the list_t lis.
 *
 * Return: number of element'sin h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
