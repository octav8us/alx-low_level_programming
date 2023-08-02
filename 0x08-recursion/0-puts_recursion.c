#include "main.h"

/**
 * puts_recursion - same as puts, see man puts
 * @s: char to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(&s[1]);
	return;


}
