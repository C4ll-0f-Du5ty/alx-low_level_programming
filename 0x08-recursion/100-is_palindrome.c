#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * p - check if a string is a palindrome
 * @s: string to check
 * @i: counter
 * Return: 0 or 1
 */

int p(char *s, int i)
{
	int n = strlen(s);

	if (i < n / 2 && s[i] == s[n - 1 - i])
		return (p(char s, i + 1));
	else if (s[i] == s[n - 1 - i])
		return (1);
	else
		return (0);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int i = 0;
	int n = strlen(s);

	if (s[i] == s[n - 1 - i])
		return (p(char s, i + 1));
	else
		return (0);
}
