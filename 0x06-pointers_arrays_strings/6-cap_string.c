#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * isDelimiter - determines whether ascii is a delimiter
 * @c: character
 * @flag: indicator
 * Return: 1 if true, 0 if false
*/

int isDelimiter(char c, int flag)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			flag = 1;
	return (flag);
}

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
	int j = 0;
	int flag;

	while (str[j] != '\0')
	{

	if (isLower(str[j]) && isDelimiter(str[j], flag))
	{
		str[j] = str[j] - 32;
		flag = 0;
	}
	else
		flag = 0;
	j++;
	}
	return (str);
}
