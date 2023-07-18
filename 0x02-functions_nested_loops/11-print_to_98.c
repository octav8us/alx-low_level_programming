#include <stdio.h>
/**
 * print_to_98 - prints to 98 from the passed number.
 * @n: the start of counting.
 * Return: void
 */

void print_to_98(int n)
{
	printf("%d", n);
	if (n == 98)
		return;
	else if (n < 98)
	{
		while (n <= 98)
		{
		printf(" ,%d", n++);
		}
	}
	else
	{
		while ( n >= 98 )
		{
		printf(" ,%d", n--);
		}
	}
}
