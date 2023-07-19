#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void (no need to return anything)
 */
void times_table(void)
{
int a, b, c;

for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
if (c > 9)
{
putchar(',');
putchar(' ');
putchar(c / 10 + '0');
putchar(c % 10 + '0');
}
else
{
if (b != 0)
{
putchar(',');
putchar(' ');
putchar(' ');
}
putchar(c + '0');
}
}
putchar('\n');
}
}
