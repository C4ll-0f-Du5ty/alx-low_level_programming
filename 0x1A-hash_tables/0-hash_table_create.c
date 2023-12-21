#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *number1;

    number1->size = size;
    number1->array = calloc(size, sizeof(hash_table_t));
    if (!number1)
    {
        free(number1);
        return 0;
    }

    return (number1);
}
