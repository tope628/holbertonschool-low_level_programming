#include "hash_tables.h"

/**
 * hash_table_set - adds element to hash table
 * @ht: hash table
 * @key: key index
 * @value: value of key
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *exist_node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = key;
	new_node->value = value;

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = new_node;
	}
	else
	{
		exist_node = ht->array[idx];
		ht->array[idx] = new_node;
		new_node->next = exist_node;
	}
	return (1);


}
