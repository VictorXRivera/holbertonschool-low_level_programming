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
	unsigned long int i;
	hash_node_t *ptr;
	hash_node_t *set_node = NULL;

	if (ht == NULL || strcmp(key, "") == 0 || value == NULL || key == NULL)
		return (0);
	set_node = malloc(sizeof(hash_node_t));
	if (set_node == NULL)
	{
		return (0);
	}
	i = key_index((const unsigned char *)key, ht->size);
	set_node->key = strdup(key);
	set_node->value = strdup(value);
	set_node->next = NULL;
	if (ht->array[i] == NULL)
	{
		ht->array[i] = set_node;
		return (1);
	}
	ptr = ht->array[i];
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			free(set_node);
			return (1);
		}
		ptr = ptr->next;
	}
	set_node->next = ht->array[i];
	ht->array[i] = set_node;
	return (1);
}
