#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - printereach array elem on a newl
 * @array: array
 * @size: how many elem toprints
 * @action: pointer to print in regular
 * Return: null
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
