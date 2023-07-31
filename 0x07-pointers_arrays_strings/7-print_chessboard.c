#include "main.h"

/**
 * print_chessboard - Function prints a chessboard
 * @a :The two dimension array that is to be printed
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
