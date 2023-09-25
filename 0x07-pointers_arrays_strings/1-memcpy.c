#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src to be copied
 *
 * Return: the pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
