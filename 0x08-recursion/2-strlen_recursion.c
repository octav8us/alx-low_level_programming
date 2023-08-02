#include "main.h"

/**
 * _strlen_recursion - size of string
 * @s: pointer to string params
 * Return: recursion
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));



}
