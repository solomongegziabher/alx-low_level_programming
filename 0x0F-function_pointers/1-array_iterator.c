#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes function given as parameter
 * @array: array of elements
 * @size: size of arrays
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
