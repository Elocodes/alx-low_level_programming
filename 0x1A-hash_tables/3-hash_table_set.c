#include "hash_tables.h"

/**
 * create_new_node - function creates a key and value pair
 *@key: the key
 *@value: the value
 *
 * Return: returns a pointer to the key allocated memory
 */
hash_node_t *create_new_node(const char *key, const char *value)
{
	/*create the key and value pair*/

	hash_node_t *nodeMem;

	nodeMem = malloc(sizeof(hash_node_t));
	if (nodeMem == NULL)
		return (0);
	nodeMem->key = malloc(strlen(key) + 1);
	nodeMem->value = malloc(strlen(value) + 1);

	strcpy(nodeMem->key, key);
	strcpy(nodeMem->value, value);
	return (nodeMem);
}

/**
 * hash_table_set - function updates a hash table with new node
 *@ht: a pointer to the table's struct
 *@key: the key
 *@value: the value
 *
 * Return: returns 1 upon sucess, 0 at failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_KeyAndValue;
	hash_node_t *check_array;
	int index;

	/*call the key and value function created*/

	new_KeyAndValue = create_new_node(key, value);

	/*use the key index function to find the index of the key*/

	index = key_index((const unsigned char *)key, ht->size);

	/*is the index free?, check if it contains any key*/

	check_array = ht->array[index];
	if (check_array == NULL)
	{
		/*then no collision. insert new key and value pair*/
		ht->array[index] = new_KeyAndValue;
		return (1);
	}
	else
	{
		/*case1: same key already exists. so update its value*/
		if (strcmp(check_array->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			return (1);
		}
		else
		{
			/*some other key exists in the index. insert at top*/
			new_KeyAndValue->next = ht->array[index];
			ht->array[index] = new_KeyAndValue;
			return (1);
	}
	return (1);
}
