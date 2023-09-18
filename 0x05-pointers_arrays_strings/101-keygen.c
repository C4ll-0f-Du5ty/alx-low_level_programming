#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - generates random passwords for 101-crackme
  * Return: zero
*/

int main(void)
{
	int s;
	char k;

	srand(time(NULL));
	while (s <= 2645)
	{
		k = rand() % 128;
		s += k;
		putchar(k);
	}
	putchar(2772 - s);
	return (0);
}
