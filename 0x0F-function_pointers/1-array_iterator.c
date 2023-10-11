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
	int i;
	int end = *array + size;

	for (i = 0; i < end; i++)
		action(array[i]);
}
