#include "main.h"

/**
 * _pow_recursion - power recursion
 * @x: integer parameterz
 * @y: integer parameterz
 * Return: recursion
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
