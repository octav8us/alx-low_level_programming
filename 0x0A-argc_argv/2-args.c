#include "main.h"

/**
 * main - print program args
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if sucess
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
