#include <stdlib.h>
#include "main.h"

/**
 * times_table - prints time table of n
 *
 * Description: nice one
 *
 * @n: takes number input
*/

void times_table(int n)
{
	int i, j, k;

	if (n < 16 && n >= 0)
	{
	for (i = 0; i <= n; i++)
	{
		_putchar(48);
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');

			k = i * j;

			if (k < 10)
				_putchar(' ');
			if (k < 100)
				_putchar(' ');

			if (k > 99)
			{
				_putchar((k / 100) + 48);
				_putchar((k / 10) % 10 + 48);
			}
			else if (k <= 99 && k >= 10)
				_putchar((k / 10) + 48);
			_putchar((k % 10) + 48);
		}
		 _putchar('\n');
	}
	}
}
