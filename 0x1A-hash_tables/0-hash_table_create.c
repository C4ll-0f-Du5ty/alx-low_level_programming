#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int n;
    hash_table_t *number1;

    number1->array = malloc(sizeof(hash_table_t));
    if (!number1)
    {
        free(number1);
        return 0;
    }
    number1->size = size;
    number1->array = calloc(sizeof(hash_table_t) * size);
    return (number1);
}
