#include "main.h"

/**
 * main - print program args numer
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if sucess
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
