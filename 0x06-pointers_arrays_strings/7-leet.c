#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *leet - franko function
 * @ptr: the string provided
 * Return: the ptr
 */

char *leet(char *ptr)
{
	char arr1[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char arr2[] = {'4', '3', '0', '7', '1'};
	int i, j, k = 0;

	for (i = 0; arr1[i] != '\0'; i++)
	{
		k = i / 2;
		for (j = 0; ptr[j] != '\0'; j++)
		{
			if (arr1[i] == ptr[j])
				ptr[j] = arr2[k];
		}
	}
	return (ptr);
}
