#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hashtable
 * @ht: hashtable
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	hash_node_t *temp, *current_node;

	for (i; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			temp = current_node->next;
			free(current_node->key);
			free(current_node->value);
			free(current_node);
			current_node = temp;
		}
	}
	free(ht->array);
	free(ht);
}
