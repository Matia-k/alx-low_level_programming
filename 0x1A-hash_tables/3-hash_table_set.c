#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: ht is the hash table to add or update the key/value to.
 * @key:  is the key. key can not be an empty string.
 * @value: is the value associated with the key.must be duplicated.
 * value can be an empty string.
 * Return: 1 if succeeded, 0 otherwise.
 *
 * Description: In case of collision, add the new node at the beginning of the
 * list.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int i, index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	node->key = malloc(strlen(key) + 1);
	node->value = malloc(strlen(value) + 1);
	strcpy(node->key, key);
	strcpy(node->value, strdup(value));
	node->next = NULL;

	index = key_index((unsigned char *)key, ht->size);

	for (i = 0; i < ht->size; i++)
	{
		if (i == index)
		{
			if (ht->array[i] == NULL)
				ht->array[i] = node;
			else
			{
				while (ht->array[i])
					ht->array[i] = ht->array[i]->next;
				ht->array[i]->next = node;
			}
		}
	}
	return (1);
}
