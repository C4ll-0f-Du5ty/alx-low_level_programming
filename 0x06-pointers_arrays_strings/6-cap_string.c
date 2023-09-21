#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * isLower - finds the lower characters in ascii forms
 * @c: the character
 * Return: the answer
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 * Return: string with capitalized words
*/

char *cap_string(char *str)
{
	int i, j = 0;
	char delimiter[] = " \t\n,.!?\"(){}";
	int flag = 1;

	while (str[j] != '\0')
	{
	if (isLower(str[j] && flag))
	{
		str[j] = str[j] - 32;
		flag = 0;
	}
	for (i = 0; i < 12; i++)
	{
		if (str[i] == delimiter[i])
		{
			flag = 1;
			break;
	}
	}
	j++;
	}
	return (str);
}
