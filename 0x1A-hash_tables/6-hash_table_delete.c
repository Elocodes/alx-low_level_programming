#include "hash_tables.h"
/**
 * free_item - function frees keys and their values
 * @items: pointer to key value pairs
 *
 * Return: none
 */
void free_item(hash_node_t *items)
{
	free(items->key);
	free(items->value);
	free(items);
}

/**
 * hash_table_delete - function deletes a table and its items
 * @ht: pointer to the table
 *
 * Return: none
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *items;

	for (i = 0; i < ht->size; i++)
	{
		items = ht->array[i];
		if (items != NULL)
			free_item(items);
	}
	free(ht->array);
	free(ht);
}
