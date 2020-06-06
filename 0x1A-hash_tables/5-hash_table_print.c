#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int index;
	unsigned long int comma = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp)
		{
			if (comma == 0)
				printf(", ");
			printf("\'%s\': \'%s\'", temp->key, temp->value);
			comma = 0;
			temp = temp->next;
		}
	}
	printf("}\n");

}
