#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @c: The number to be computed
 * Return: Absolute value of a number or zero
 */
int _abs(int c)
{
int abs_val;

if (c < 0)
{
abs_val = -c;
}
else
abs_val = c;
return (abs_val);
}
