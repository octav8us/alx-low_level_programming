#include "variadic_functions.h"
/**
 * void print_numbers - prints all  its parameters
 * @n: number of arguments
 * @separator:  string to be printed between numbers
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator == NULL)
	{
	for (i = 0; i < n - 1; i++)
		printf("%d ",va_arg(ap, int));
	}
	else
	{
	for (i = 0; i < n - 1; i++)
		printf("%d%c " ,va_arg(ap, int) ,*separator);
	}
	printf("%d\n",va_arg(ap, int));

	va_end(ap);
}
