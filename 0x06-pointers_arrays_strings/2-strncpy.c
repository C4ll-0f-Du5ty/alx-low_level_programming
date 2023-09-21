#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - A function that copies a string.
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	dest[n] = '\0';

	return (dest);
}
