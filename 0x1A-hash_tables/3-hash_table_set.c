#include "hash_tables.h"
/**
 * hash_table_set - set a hashnode to a hashtable
 * @ht: hashtable
 * @key: hashnode key
 * @value: hashnode value
 * Return: 0 if fail or 1 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long size, len;
    hash_node_t *new_node;

    if (ht == NULL || key == NULL || value == NULL)
        return (0);
    size = ht->size;
    len = key_index((const unsigned char *)key, size);
    if (ht->array[len] != NULL && strcmp(ht->array[len]->key, key) == 0)
    {
        ht->array[len]->value = strdup(value);
        return (1);
    }
    new_node = malloc(sizeof(hash_node_t));

    if (new_node == NULL)
        return (0);
    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[len];
    ht->array[len] = new_node;
    return (0);
}
