#include "main.h"
/**
 * print_last_digit - checks for the last digit in @n and prints it
 *
 * @n: the number to be checked
 * Return:the last digit of @n
 */

int print_last_digit(int n)
{

	int lastdigit;

	lastdigit = n % 10;
	if (lastdigit < 0)
		lastdigit *= -1 ;
	_putchar(lastdigit + '0');
	return ( lastdigit );


}
