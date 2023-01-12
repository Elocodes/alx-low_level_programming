#include "hash_tables.h"

/**
 **hash_table_get - function searches for a key and its pair
 *@ht: pointer to hash table
 *@key: the key
 *
 * Return: returns the content of key and value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *items;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	items = ht->array[index];

	if (items->value == NULL)
		return (NULL);
	while (items != NULL)
	{
		if (strcmp(items->key, key) == 0)
			return (items->value);

		items = items->next;
	}
	return (0);
}
