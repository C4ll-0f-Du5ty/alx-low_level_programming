#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * p - check if a string is a palindrome
 * @s: string to check
 * @i: counter
 * Return: 0 or 1
 */

int is_palindrome(char *s);
int p(char *s, int i, int n)
{
	if (i < n / 2 && s[i] == s[n - 1 - i])
		return (p(s, i + 1, n));
	else if (i >= n / 2 && s[i] == s[n - 1 - i])
		return (1);
	else
		return (0);
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
		return (p(s, i + 1, n));
	else
		return (0);
}
