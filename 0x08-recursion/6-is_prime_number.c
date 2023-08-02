#include "main.h"


/**
 * divisors - checks if paramter
 * @n: integer params
 * @start: integer params
 * Return: boolean
 */

int divisors(int n, int start)
{
	if (start % n == 0)
	{
		return (0);
	}
	else if (start / 2 > n)
	{
		return (divisors(n + 2, start));
	}
	else
	{
		return (1);
	}
}




/**
 * is_prime_number - takes the number to check if it's prime
 * @n: integer params
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, n));
	}
}
