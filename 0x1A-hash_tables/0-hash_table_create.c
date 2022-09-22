#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *HASHTABLE;

    HASHTABLE = (hash_table_t *)malloc(sizeof(hash_table_t));

    if (HASHTABLE == NULL)
        return (NULL);
    HASHTABLE->size = size;
    HASHTABLE->array = malloc(sizeof(hash_node_t) * size);

    if (HASHTABLE->array == NULL)
        return (NULL);
    int i = 0;
    for (i; i < size; i++)
    {
        HASHTABLE->array[i] = NULL;
    }
    return (HASHTABLE);
}
