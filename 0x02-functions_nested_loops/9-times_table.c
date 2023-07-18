#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: always 0
 */

void times_table(void)
{
	int a;
	int b;
	int result;

	for (a = 0;  a <= 9 ; a++)
	{
		_putchar('0');
		_putchar(',');
		for (b = 1 ; b <= 9 ; b++)
		{
			result = a * b;
			_putchar(' ');
			if ((result / 10) > 0)
				_putchar((result / 10) + '0');
			else
				_putchar(' ');

			_putchar((result % 10) + '0');
			_putchar(',');

		}

	_putchar('\n');

	}

}
