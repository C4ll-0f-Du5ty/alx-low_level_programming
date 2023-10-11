#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - maps an array through a func pointer
 * @array: the int array
 * @size: the array size
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array && size && action)
	for (i = 0; i < size; i++)
		action(array[i]);
}
