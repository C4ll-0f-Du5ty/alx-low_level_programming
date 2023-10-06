#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *main-print number of arguments passed.
 *@argc:number of commandline arguments.
 *@argv:pointer to an array of commmand line arguments.
 *Return:0-success, non-zero-fail.
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%i\n", argc);
	return (0);
}
