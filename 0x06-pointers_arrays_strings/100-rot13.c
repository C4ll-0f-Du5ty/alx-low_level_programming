#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *rot13 - encodes the string
 * @ptr: the string to be encoded
 * Return: the encoded ptr
 */

char *rot13(char *ptr)
{
	int i, j;
	int length = strlen(ptr);

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (j = 0; ((ptr[i] >= 'a' && ptr[i] <= 'z') || (ptr[i] >= 'A' && ptr[i] <= 'Z')) && j < length; j++)
		{
			if ((ptr[i] >= 'a' && ptr[i] <= 'z'))
				ptr[i] = ((ptr[i] - 'a' + 13) % 26) + 'a';
			else
				ptr[i] = ((ptr[i] - 'A' + 13) % 26) + 'A';
		}
	}
	return (ptr);
}
