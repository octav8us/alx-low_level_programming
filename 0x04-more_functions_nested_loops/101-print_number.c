#include "main.h"

/**
 *print_number - prints number
 *@n: the number
 *Return: void
 */

void print_number(int n)
{
int digit;

if (n < 0)
{
	_putchar('-');
	n = -n;
}
if (n == 0)
{
	_putchar('0');
}
for (digit = n; digit > 0; digit /= 10)
{
	_putchar(digit % 10 + '0');
}
}
