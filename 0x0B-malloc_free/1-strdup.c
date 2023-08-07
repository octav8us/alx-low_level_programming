#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{

	unsigned int i, j;
	char *p;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
		i++;

	p = malloc((sizeof(char) * i) + 1);

	if (p == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		p[j] = str[j];
	}

	return  (p);

}
