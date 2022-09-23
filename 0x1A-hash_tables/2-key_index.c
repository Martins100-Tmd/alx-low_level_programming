#include "hash_tables.h"
/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash, H;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash += ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}
/**
 * key_index - hash_key returning function
 * @key: key of the hashcode
 * @size: size of the hash table
 *
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int Hash_pos;
    if (key != NULL)
    {
        Hash_pos = hash_djb2((unsigned char *)key) % size;
    }
    return Hash_pos;
}
