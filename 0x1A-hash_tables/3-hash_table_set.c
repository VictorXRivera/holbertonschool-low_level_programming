#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 on success, 0 on fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash, size;
	hash_node_t *node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	size = ht->size;
	hash = key_index((const unsigned char *)key, size);

	if (ht->array[hash] != NULL && strcmp(ht->array[hash]->key, key) == 0)
	{
		ht->array[hash]->value = strdup(value);
		return (1);
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[hash];
	ht->array[hash] = node;
	return (1);
}
