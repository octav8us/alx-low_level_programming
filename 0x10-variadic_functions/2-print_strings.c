#include "variadic_functions.h"
/**
 * print_strings - prints all  its char parameters
 * @n: number of arguments
 * @separator:  string to be printed between numbers
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *param;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		param = va_arg(ap, char *);
		if (!param)
			param = "(nil)";
		if (!separator)
			printf("%s", param);
		else if (separator && i == 0)
			printf("%s", param);
		else
			printf("%s%s", separator, param);
	}

	printf("\n");

	va_end(ap);
}
