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
	unsigned long int size, hashcode;

	hash_node_t *temp;

	size = ht->size;

	if (ht == NULL || key == NULL)
		return (NULL);
	hashcode = key_index((const char *)key, size);
	temp = ht->array[hashcode];

	if (temp == NULL)
		return (NULL);

	if (temp && strcmp(temp->key, key) == 0)
	{
		return (temp->value);
	}

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
