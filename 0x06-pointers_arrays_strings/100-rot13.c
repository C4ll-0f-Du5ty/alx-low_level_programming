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
		if ((ptr[i] >= 'a' && ptr[i] <= 'm') || (ptr[i] >= 'A' && ptr[i] <= 'M'))
		{
			ptr[i] += 13;
		}
		else if ((ptr[i] >= 'n' && ptr[i] <= 'z') || (ptr[i] >= 'N' && ptr[i] <= 'Z'))
		{
			ptr[i] -= 13;
		}
	}
	return (ptr);
}
