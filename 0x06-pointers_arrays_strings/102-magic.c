#include <stdio.h>

/**
 * main - to print an array
 * Return: 0
 */

int main(void)
{
	int n;
	int g[5];
	int *p;

	g[2] = 1024;
	p = &n;
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("g[2] = %d\n", g[2]);
	return (0);
}
