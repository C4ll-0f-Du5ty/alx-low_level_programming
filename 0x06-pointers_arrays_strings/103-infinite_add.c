#include "main.h"

/**
 * infinite_add -  adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: result lenght
 * Return: sum
 *
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index1 = 0, index2 = 0, k, max_index, digit1, digit2, carry = 0;

	while (n1[index1] != '\0')
		index1++;
	while (n2[index2] != '\0')
		index2++;
	if (index1 > index2)
		max_index = index1;
	else
		max_index = index2;
	if (max_index + 1 > size_r)
		return (0);
	r[max_index] = '\0';
	for (k = max_index - 1; k >= 0; k--)
	{
		index1--;
		index2--;
		if (index1 >= 0)
			digit1 = n1[index1] - '0';
		else
			digit1 = 0;
		if (index2 >= 0)
			digit2 = n2[index2] - '0';
		else
			digit2 = 0;
		r[k] = (digit1 + digit2 + carry) % 10 + '0';
		carry = (digit1 + digit2 + carry) / 10;
	}
	if (carry == 1)
	{
		r[max_index + 1] = '\0';
		if (max_index + 2 > size_r)
			return (0);
		while (max_index-- >= 0)
			r[max_index + 1] = r[max_index];
		r[0] = carry + '0';
	}
	return (r);
}

