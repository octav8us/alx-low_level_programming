#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array.
 * @array: of elements
 * @size: of the array
 * @action: ptr to function to be applied
 */










void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i <= size - 1, i++)
	{
		action(array[i]);


	}






}
