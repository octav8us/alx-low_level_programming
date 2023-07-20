#include <stdio.h>
/**
 * _isupper - checks if the charchtaer upper or lower case
 * @c: the letter to be checked
 * Return: 1 if @c upper case, 0 otherwise
 */

int _isupper(int c)
{

	if (c > 96)
		return (0);
	else
		return (1);

}
