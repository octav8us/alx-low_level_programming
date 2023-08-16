#include "function_pointers.h"
/**
 *int_index - function that searches for an integer
 * @array: intgers to search from
 * @size: of the array
 * @cmp: compare function pointer
 * Return: the index of the first element for which the cmp function
 * does not return 0, if no element matches, return -1,
 * size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < (size - 1); i++)
	{
		if (cmp(array[i]) != 0)
			return (i);

	}


	return (0);
}
