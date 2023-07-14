#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints random number and tell if
 *	  last digit bigger or smaller or equal 5
 *
 *Return: Always 0
 *
*/
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = n % 10;
	printf("Last digit of %d is %d ", n, x);
	if (x > 5)
		printf("and is greater than 5\n");
	else if (x == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not zero\n");
	return (0);
}
