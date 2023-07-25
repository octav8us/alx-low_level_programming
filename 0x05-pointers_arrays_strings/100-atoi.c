#include "main.h"

/**
 *_atoi - extract the nuber from intgeger
 * @s: the string in question
 * Return: the signed number
 */

int _atoi(char *s)
{
	int i;
	int j;
	int result = 0;
	int negative = 0;

	for (i = 0; !(('0' <= s[i]) && (s[i] <= '9')); i++)
	{
	if (s[i] == '-')
		negative = !negative;

	}

	for (j = 0; ('0' <= s[i]) && (s[i] <= '9'); i++, j++)
	{
		result = (result * 10) + (s[i] - '0');
	}


	if (negative && result != 0)
		result *= -1;
	return (result);
}
