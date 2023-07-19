#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: The initial number
 * Return: void (no need to return anything)
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n != 98)
printf("%d, ", n);
else
printf("%d\n", n);
}
}
else
{
for (; n >= 98; n--)
{
if (n != 98)
printf("%d, ", n);
else
printf("%d\n", n);
}
}
}
