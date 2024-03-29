#include "hash_tables.h"
/**
 * hash_table_print-function prints a hash table and its items
 * @ht: pointer to table
 *
 * Return: none
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j = 0;

	if (ht == NULL)
	{
		return;
	}
	else
	{
		putchar ('{');
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] == NULL)
				continue;
			if (j > 0)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
			j++;
		}
		printf("}\n");
	}
}
