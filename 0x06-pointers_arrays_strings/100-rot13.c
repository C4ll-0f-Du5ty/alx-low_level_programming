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
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
			if ((ptr[i] >= 'a' && ptr[i] <= 'z'))
				ptr[i] = ((ptr[i] - 'a' + 13) % 26) + 'a';
			else if (ptr[i] >= 'A' && ptr[i] <= 'Z')
				ptr[i] = ((ptr[i] - 'A' + 13) % 26) + 'A';
	}
	return (ptr);
}
