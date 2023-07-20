#include "main.h"

/**
 * print_square - prints square of "#"
 * @n: size of square
 * Return: void
 */

void print_square(int n)
{
	int i;
	int x;

	for (i = 0; i < n; i++)
	{
		for (x = 0; x < n; x++)
		{
		_putchar('#');
		}
	_putchar('#');
	_putchar('\n');
	}

	if (n <= 0)
	{
	_putchar('\n');
	}
}
