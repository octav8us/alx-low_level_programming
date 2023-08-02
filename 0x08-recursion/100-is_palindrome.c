#include "main.h"

/**
 * is_palindrome - checks if string is palindrome
 * @s: the string in question
 * Return: 1 if a string is a palindrome and 0 if not.
 */


int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal_helper(s, 0, _strlen_recursion(s)));
}


/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s);

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal_helper - checks the characters recursively for palindrome
 * @s: string to check
 * @start: fitst letter index
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal_helper(char *s, int start, int len);

int check_pal_helper(char *s, int start, int len)
{
	if (*(s + start) != *(s + len - 1))
		return (0);
	if (start >= len)
		return (1);
	return (check_pal_helper(s, start + 1, len - 1));
}
