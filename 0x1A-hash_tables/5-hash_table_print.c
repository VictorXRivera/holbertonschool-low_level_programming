
#include "hash_tables.h"

/**
* hash_table_print - Printing hash table
* Return: void
* @ht: hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, s;
	int begin = 0;

	if (ht == NULL)
		return;
	s = ht->size;
	printf("{");
	for (index = 0; index < s; index++)
	{
		if (ht_display(ht->array[index], begin) == 1)
		{
			begin = 1;
		}
	}
	printf("}\n");
}
/**
* ht_display - prints the linked list in the hash table
* Return: 1 if anythin printed else 0
* @node: head node of the list
* @begin: punc tracker
*/
int ht_display(hash_node_t *node, int begin)
{
	if (node == NULL)
		return (0);
	if (begin == 1)
		printf(", ");
	printf("'%s': '%s'", node->key, node->value);
	if (node->next)
	{
		ht_display(node->next, 1);
	}
	return (1);
}
