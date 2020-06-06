#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element
 * to the hash table.
 * @ht: hash table to update/add to
 * @key: is the key; cannot be empty str
 * @value: value associated with key
 * Return: 1 on success or 0 or error
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp, *head;
	unsigned long int index;

	if (key == NULL || ht == NULL || value == NULL || !(*key))
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	head = ht->array[index];
	while (head)
	{
		if (strcmp(key, head->key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			if (head->value == NULL)
				return (0);
			return (1);
		}
		head = head->next;
	}
	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
		return (0);
	temp->value = strdup(value);
	if (temp->value == NULL && value != NULL)
		return (0);
	temp->key = strdup(key);
	temp->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = temp;
	}
	else
	{
		temp->next = (ht->array)[index];
		(ht->array)[index] = temp;
	}
	return (1);
}
