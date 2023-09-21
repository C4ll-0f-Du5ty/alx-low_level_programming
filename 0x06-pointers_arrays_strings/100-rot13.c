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
		ptr[i] = (ptr[i] + 13) % 26
	}
	return (ptr);
}
