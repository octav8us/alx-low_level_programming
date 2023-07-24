#include "main.h"
/**
 * _strcpy - copy the string pointed to by src to dest
 * @dest: char to check
 * @src: char to check
 * Return: 0 is success
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{	
		if(a == 0)
		{
			dest[a] = src[a];
		}
		dest[a + 1] = src[a + 1];
	}
	return (dest);
}
