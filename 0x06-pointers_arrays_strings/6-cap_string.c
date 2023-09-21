#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: string with capitalized words
 */

char *cap_string(char *s)
{
	int capitalize = 1;

	for (int i = 0; s[i] != '\0'; i++)
	{
	if (isspace(s[i]) || s[i] == ',' || s[i] == ';' || s[i] == '.' ||
	s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' ||
	s[i] == ')' || s[i] == '{' || s[i] == '}')
	{
	capitalize = 1;
	}
	else if (capitalize && islower((unsigned char)s[i]))
	{
	s[i] = toupper((unsigned char)s[i]);
	capitalize = 0;
	}
	else
	{
	capitalize = 0;
	}
	}

	return (s);
}
