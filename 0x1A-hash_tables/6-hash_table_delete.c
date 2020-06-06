#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	hash_node_t *ht_delete;
	unsigned long int index;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		ht_delete = ht->array[index];
		while (ht_delete)
		{
			temp = ht_delete;
			ht_delete = ht_delete->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
