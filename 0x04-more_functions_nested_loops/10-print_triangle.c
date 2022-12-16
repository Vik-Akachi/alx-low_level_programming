#include "main.h"

/**
 * print_triangle - this is a function that prints a triangle
 *
 * _putchar: furnction for printing function
 *
 *@size: the parameter for the triangle
 *
 * Return: returns to 0
 */

void print_triangle(int size)
{
	int row, hashes, spaces;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar (' ');
			}
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
