#include "hash_tables.h"
/**
 * key_index - hash_key returning function
 * @key: key of the hashcode
 * @size: size of the hash table
 *
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
   return (hash_djb2(key) % size);
}
