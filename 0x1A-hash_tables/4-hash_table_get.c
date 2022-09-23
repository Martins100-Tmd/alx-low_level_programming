#include "hash_tables.h"
/**
 * hash_table_get - gets the value associated to a key
 * @ht: pointer to a hashtable
 * @key: key of a hashnode
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int hashcode, size;
    hash_node_t *temp;
    size = ht->size;
    hashcode = key_index((const char *)key, size);
    if (ht == NULL || key == NULL)
        return (0);
    temp = ht->array[hashcode];
    if (temp != NULL && strcmp(temp->key, key) == 0)
    {
        return (temp->value);
    }
    else if (temp != NULL && strcmp(temp->key, key) != 0 && temp->next != NULL)
    {
        while (temp)
        {
            if (strcmp(temp->key, key) == 0)
            {
                return (temp->value);
            }
            temp = temp->next;
        }
    }
    else
    {
        return (NULL);
    }
}
