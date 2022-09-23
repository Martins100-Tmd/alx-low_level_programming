#include "hash_tables.h"

/**
 * hash_table_get - gets the value associated to a key
 * @ht: pointer to a hashtable
 * @key: key of a hashnode
 *
 * Return: NULL or a pointer
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hashcode;

	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);
	hashcode = key_index((const unsigned char *)key, ht->size);
	if (ht->array[hashcode] == NULL)
		return (NULL);
	temp = ht->array[hashcode];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}

	return (NULL);
}
