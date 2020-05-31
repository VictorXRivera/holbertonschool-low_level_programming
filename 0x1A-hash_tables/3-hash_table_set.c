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
	unsigned long int hash;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || key[0] == '\0')
		return (0);

	hash = hash_djb2((const unsigned char *)key) % ht->size;
	if (ht->array[hash] && strcmp(ht->array[hash]->key, (char *)key))
	{
		ht->array[hash]->value = strdup(value);
		if (ht->array[hash]->value == NULL)
			return (0);
		return (1);
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL && value != NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = ht->array[hash];
	ht->array[hash] = node;

	return (1);
}
