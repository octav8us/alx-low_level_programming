#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: int to evaluate
 * @index: index starting from 0
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 64)
		return (-1);

	bit = (n >> index) & 1;

	return (hold);
}
