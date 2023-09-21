#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 * Return: string with capitalized words
*/

char *cap_string(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
	while (str[j] >= 97 && str[j] <= 122)
	{
		str[j] = str[j] - 32;

	}
	j++;
	}
	return (str);
}
