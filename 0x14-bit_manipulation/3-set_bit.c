#include "main.h"

/**
 * set_bit - sets value of a bit at a given index
 * @n: decimal number pointer
 * @index: index position, starting from 0
 * Return: 1 ,-1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--)
		p *= 2;
	*n += p;

	return (1);
}
