#include "main.h"

/**
 * print_triangle - entry point
 * Description: Prints diagonals
 *@n: size of the triangle
 * Return: void
 */

void print_triangle(int n)
{
	int row, hashes, spaces;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			for (spaces = n - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
