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

	p = (char *) malloc(sizeof(c) * size);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);





}
