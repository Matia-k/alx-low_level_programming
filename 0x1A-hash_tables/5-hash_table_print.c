#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table to print.
 *
 * description: key/value is to be printed in the order that
 * they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int s;
	unsigned int space = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (s = 0; s < ht->size; s++)
	{
		if (ht->array[s] != NULL)
		{
			if (space == 1)
				printf(", ");
			while (ht->array[s])
			{
				printf("'%s': '%s'", ht->array[s]->key, ht->array[s]->value);
				ht->array[s] = ht->array[s]->next;
			}
			space = 1;
		}
	}
	printf("}\n");
}
