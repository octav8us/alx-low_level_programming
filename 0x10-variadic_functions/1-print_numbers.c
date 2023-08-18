#include "variadic_functions.h"
/**
 * print_numbers - prints all  its int parameters
 * @n: number of arguments
 * @separator:  string to be printed between numbers
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list ap;
	unsigned int i;


	va_start(ap, n);

	if (n > 0)
		printf("%d", va_arg(ap, int));

	for (i = 1; i < n ; i++)
	{
		if (!separator )
			printf("%d", va_arg(ap, int));
		else
			printf("%s%d", separator , va_arg(ap, int));



	}


	printf("\n");

	va_end(ap);
}
