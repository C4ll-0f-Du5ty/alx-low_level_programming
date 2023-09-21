#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *string_toupper - changes all lowercase letters of a string to upper.
 *
 * @str: string to return.
 * Return: string.
*/

char *string_toupper(char *str)
{
	int j = 0;

	while (str[j] >= 97 && str[j] <= 122)
	{
		str[j] = str[j] - 32;
		j++;
	}
	return (str);
}
