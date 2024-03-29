#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash_table to look into.
 * @key: the key to look for.
 * Return: the value assocaited with key, or NULL if key not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	while (ht->array[index])
	{
		if (ht->array[index]->next == NULL)
			break;
		ht->array[index] = ht->array[index]->next;
	}
	return (ht->array[index]->value);
}
