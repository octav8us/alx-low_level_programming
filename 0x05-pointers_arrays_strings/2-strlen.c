#include "main.h"
/**
 * _strlen - retrun length of a string
 * @s: the string
 * Retunrn: the length of the string
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
