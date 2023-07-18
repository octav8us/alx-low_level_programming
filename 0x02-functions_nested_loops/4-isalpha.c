#include "main.h"
/**
 * _isalpha - checks if @c is a charachter or not
 * @c: the input to be checked
 *
 * Return: 1 if the passed is char , 0 if not
 */

int _isalpha(int c)
{

	if ((c > 'a' && c < 'z') ||
	    (c > 'A' && c < 'Z'))
		return (1);
	else
		return (0);


}
