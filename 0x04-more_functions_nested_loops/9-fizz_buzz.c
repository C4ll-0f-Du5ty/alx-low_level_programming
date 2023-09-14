#include "main.h"
#include <stdio.h>
/**
 * main - print numbers 1 - 100 followed by a new line
 *       numbers that are multiples of 3 print Fizz
 *       numbers that are multiples of 5 print Buzz
 *       numbers that are multiples of 3 and 5 print FizzBuzz
 *       each number and word to be separated by space
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 0; i < 101; i++)
	{
		if (i % 3 == 0)
			return ("Fizz");
		else if (i % 5 == 0)
			return ("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			return ("FizzBuzz");
		else
			return (i);
	}
}
