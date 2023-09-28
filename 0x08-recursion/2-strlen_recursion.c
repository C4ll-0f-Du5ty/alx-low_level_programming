#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer the string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s != '\0')
	{
		counter++;
		_strlen_recursion(s + 1);
	}
	return (counter);
}
