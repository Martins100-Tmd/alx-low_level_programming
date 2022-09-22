#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 *
 * @size: the size of the hash table array
 *
 * Return: Case of error - NULL.
 * 	else, return a pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *HASHTABLE;
    unsigned int i = 0;

    HASHTABLE = malloc(sizeof(hash_table_t));

    if (HASHTABLE == NULL)
		return (NULL);

    HASHTABLE->size = size;
    HASHTABLE->array = malloc(sizeof(hash_node_t) * size);

    if (HASHTABLE->array == NULL)
		return (NULL);

    for (i; i < size; i++)
    {
        HASHTABLE->array[i] = NULL;
    }

    return (HASHTABLE);
}
