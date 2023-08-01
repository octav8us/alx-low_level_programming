#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 * TODO cant get how to handle it yet
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, p;
	unsigned int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		sum1 += *(a + p);
		p = (i * size) + (size - 1 - i);
		sum2 += *(a + p);
	}


	printf("%d, %d\n", sum1, sum2);


}
