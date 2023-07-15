#include<stdio.h>

/**
 *  main - prints 0..9 with putchar 
 *
 *  Return: always 0
 */
int main(void)
{
	int i;


	for (i = 0; i <  10; i++)
	{
		putchar ('0' + i);
	}

	putchar ('\n');
	return (0);
}
