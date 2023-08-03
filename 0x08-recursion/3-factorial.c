#include "main.h"

/**
 * factorial - shows the factorial of the number.
 * @n: number returned by the factorial
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
