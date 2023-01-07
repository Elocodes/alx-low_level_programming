#include "hash_tables.h"

/**
 * key_index - function finds the index or position of a key
 * in the hash table
 *@key: the value whose index is being looked for
 *@size: size of the table
 *
 * Return: returns the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
