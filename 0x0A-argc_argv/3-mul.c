#include "main.h"

/**
 * main - print multiplication of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if sucess
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Erorr");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
