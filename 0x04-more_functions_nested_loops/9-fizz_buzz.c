#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number and for
 * the multiples of five print Buzz. For numbers which are multiples of
 * both three and five print FizzBuzz
 * Return: always 1
 */

int main(void)
{
	int i;
	int is_fizz_or_buzz;

	for (i = 1; i <= 100; i++)
	{
		is_fizz_or_buzz = 0;

		if ((i % 3) == 0)
		{
			printf("Fizz");
			is_fizz_or_buzz = 1;
		}

		if ((i % 5) == 0)
		{
			printf("Buzz");
			is_fizz_or_buzz = 1;
		}

		if (!is_fizz_or_buzz)
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (1);
}
