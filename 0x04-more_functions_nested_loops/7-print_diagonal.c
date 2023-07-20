#include "main.h"

/**
 * print_diagonal - prints digonal line @n times of "_"
 * @n: numbers of "\"
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int x;

	for (i = 0; i < n; i++)
	{
		for (x = 0; x < i; x++)
		{
		_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}

	if (n <= 0)
	{
	_putchar('\n');
	}
}
