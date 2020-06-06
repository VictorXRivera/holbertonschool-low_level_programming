#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table
 * @key: key to search for
 * Return: Null if key can't be found, otherwise value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *get;
	unsigned long int index;

	if (key == NULL || ht == NULL || !(*key))
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);

	get = ht->array[index];
	while (get)
	{
		if (!strcmp(key, get->key))
			return (get->value);
		get = get->next;
	}
	return (NULL);
}
