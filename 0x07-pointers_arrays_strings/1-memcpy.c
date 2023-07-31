#include "main.h"

/**
 * _memcpy - copy memory from source to destenetion
 * @dest: The place where memory will be copied to
 * @src: The place where memory will be copied from
 * @n: number of bytes to be copied
 * Return: pointer to the destenation
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

	}

	return (dest);
}
