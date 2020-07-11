#include "hash_tables.h"
/**
 * hash_table_set - function that adds/updates element to ht
 * @ht: hash table
 * @key: is the key
 * @value: value to be dupped
 * Return: 1 on success, 0 on error
 *
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int element, size;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	size = ht->size;
	element = key_index((const unsigned char *)key, size);
	if (ht->array[element] != NULL && strcmp(ht->array[element]->key, key) == 0)
	{
		ht->array[element]->value = strdup(value);
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[element];
	ht->array[element] = new_node;
	return (1);
}
