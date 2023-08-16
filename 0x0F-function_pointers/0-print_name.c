#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: neame to be printed
 * @f: function used to print
 *
 */



void print_name(char *name, void (*f)(char *))
{
	f(name);

}
