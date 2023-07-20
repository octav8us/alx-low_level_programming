#include <stdio.h>
/**
 * _isdigit - checks if the charchtaer  a digit
 * @c: the letter to be checked
 * Return: 1 if @c digit, 0 otherwise
 */

int _isdigit(int c)
{

	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);

}
