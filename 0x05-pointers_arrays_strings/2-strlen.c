#include "main.h"
/**
 * _strlen - retrun length of a string
 * @s: the string
 * Return: the length of the string
 */


int _strlen(char *s)
{
	int count;

	count = 0;
	for (; *s != '\0' ; s++)
	{
		count++;
	}

	return (count);


}
