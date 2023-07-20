#include "main.h"

/**
 * print_line - prints straight line @c times of "_"
 * @n: numbers of "_"
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	_putchar('_');
	}
	_putchar('/n');
}
