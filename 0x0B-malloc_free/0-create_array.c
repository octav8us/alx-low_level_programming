#include "main.h"
/**
 * create_array - returns list of size @size
 * filled witg @c
 * @c: charachter to use
 * @size: size of array
 * Return: the new char pointer
 */


char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(c) * size);

	if (p == NULL)
		return (0);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);





}
