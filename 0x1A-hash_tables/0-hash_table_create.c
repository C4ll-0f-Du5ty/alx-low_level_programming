#include "hash_tables.h"

/**
 * hash_table_create - implementation of the hash creation.
 * @size: the index number
 *
 * Return: hash address
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *number1;
	unsigned long int n;
	number1 = malloc(sizeof(hash_table_t));
	if (number1 = NULL)
	{
		return (NULL);
	}
	number1->size = size;
	number1->array = malloc(size * sizeof(hash_table_t));

	if (number1->array = NULL)
	{
		free(number1);
		return (NULL);
	}
	for (n = 0; n < size; n++)
		number1->array[n] = NULL;

	return (number1);
}
