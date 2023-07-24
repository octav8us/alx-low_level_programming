#include "main.h"
/**
 * print_rev - prints a reversed string, followed by a new line, to stdout
 * @str: the output
 * Return: void
 */

void print_rev(char *s)
{
int a = 0, b, c;
	char d;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}


