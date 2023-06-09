#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array to store nodes of the table.
 * Return: a pointer to the newly created hash table,
 * or NULL if something goes wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
