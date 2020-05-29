#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: Size of the array
 * Return: Pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	if (size < 1)
	{
		return (NULL);
	}

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = (hash_node_t **)malloc(size * sizeof(hash_node_t));
	
	if (hash_table->array == NULL)
	{
		free(hash_table);
	}

	memset(hash_table->array, 0, size * sizeof(hash_node_t));
	
	return (hash_table);
}
