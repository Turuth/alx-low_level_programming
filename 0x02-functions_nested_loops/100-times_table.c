#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table (0 to 15)
 * prints the multiplication table from 0 to @n (inclusive)
 */
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int i, j, result;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;
if (j == 0)
{
_putchar('0');
}
else
{
_putchar(' ');
_putchar(' ');
if (result < 10)
{
_putchar(' ');
_putchar(' ');
}
else if (result < 100)
{
_putchar(' ');
}
_putchar(result + '0');
}
}
_putchar('\n');
}
}
}
