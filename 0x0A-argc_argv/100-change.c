#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *main-prints the minimum number of coins
 *to make change for an amount of money.
 *@argc:number of commandline arguments.
 *@argv:pointer to an array of commmand line arguments.
 *Return:0-success, non-zero-fail.
 */

int main(int argc, char **argv)
{
	int i, c, change[] = {25, 10, 5, 2, 1};
	int counter = 0;

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}

	c = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		if (c >= change[i])
		{
			counter += c / change[i];
			c %= change[i];
			if (c == 0)
				break;
		}
	}
	printf("%i\n", counter);
	return (0);
}
