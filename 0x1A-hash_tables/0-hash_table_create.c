#include "hash_tables.h"

/**
 * hash_table_create - function creates a hash table of struct
 * of "size and arrays"
 *@size: size of the hash table
 *
 * Return: returns a pointer to the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_ht;

	/**
	 * my_ht - allocates memory space for the entire hash table
	 * whereby the size will be the input size allocated while
	 * the array will take up space based on the number of nodes.
	 * each node contains items; key/value pair, and next
	 */
	my_ht = malloc(sizeof(hash_table_t));
	if (my_ht == NULL)
		return (NULL);

	my_ht->size = size;
	my_ht->array = malloc(sizeof(hash_node_t));
	if (my_ht->array == NULL)
		return (NULL);
	return (my_ht);
}
