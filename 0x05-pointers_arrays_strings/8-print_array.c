#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 * @a: pointer to array of char
 * @n: int to check
 * Return: void
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
printf("\n");
}
