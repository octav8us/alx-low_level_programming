#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len, i, j;
	char *p;

	i = 0;
	len = 0;

	while (s1 && s1[i])
		i++;
	j = 0;
	while (s2 &&s2[j])
		j++;
	len = i + j + 1;
	p = malloc(sizeof(char) * len);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len - j - 1; i++)
	{
		p[i] = s1[i];
	}

	for (j = 0; j < len - i - 1  ; j++)
	{
		p[i + j] = s2[j];
	}

	return (p);
}
