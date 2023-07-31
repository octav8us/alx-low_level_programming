#include "main.h"
/**
 * *_memset - fills memory with constant byte
 * @s: pointer to where the function will write
 * @b: the letter to write
 * @n: number of nytes to be written
 * Return: pointer to memory @*s
 */



char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;
	char *start;

	start = s;
	for (i = 0; i < n; i++)
	{
		*s = b;
		s += 1;
	}

	return (start);
}
