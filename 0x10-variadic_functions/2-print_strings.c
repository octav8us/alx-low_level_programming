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
	if (separator == NULL)
	{
		for (i = 0; i < n - 1; i++)
		{
			param = va_arg(ap, char*);
			if (param == NULL)
			{
				printf("%s ", "(nil)");
				continue;
			}
			printf("%s ", param);
		}
	}
	else
	{
		for (i = 0; i < n - 1; i++)
		{
			param = va_arg(ap, char*);

			if (param == NULL)
			{
				printf("%s%s", "(nil)", separator);
				continue;
			}
			printf("%s%s ", param, separator);
		}
	}
	param = va_arg(ap, char*);
	if (param == NULL)
	{
		printf("%s ", "(nil)");
	}
	else
		printf("%s\n", param);
	va_end(ap);
}
