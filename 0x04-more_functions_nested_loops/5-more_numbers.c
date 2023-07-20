#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int x;

	for (i = 0; i <= 10 ; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 10)
				_putchar('1');
			_putchar((x % 10) + '0');
		}

	_putchar('\n');
	}

}
