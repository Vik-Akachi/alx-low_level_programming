#include "main.h"

/**
 * print_chessboard - a function that prints a chessboard
 * @a: pointer to a variable size
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0, a < 8; b++)

	{
		for (c = 0; c < 8; c++)

		{
			_putchar (a[b][c]);
		}
		_putchar ('\n')
	}
}
