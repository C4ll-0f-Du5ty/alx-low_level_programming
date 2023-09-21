#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
*/

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	a[i] = n - i - 1;
}
