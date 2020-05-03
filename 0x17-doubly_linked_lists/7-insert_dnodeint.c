#include "lists.h"

/**
 * insert_dnodeint_at_index - function to insert node at idx
 * @h: start of list
 * @idx: position
 * @n: integer
 * Return: Inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nth_node, *temp;
	unsigned int i;

	nth_node = malloc(sizeof(dlistint_t));
	if (nth_node == NULL)
		return (NULL);
	nth_node->n = n;
	temp = (*h);
	if (temp == NULL)
	{
		nth_node->next = temp;
		(*h) = nth_node;
		return (nth_node);
	}
	for (i = 1; i < idx; i++)
	{
		temp = temp->next;
	}
	nth_node->next = temp->next;
	temp->next = nth_node;
	return (nth_node);
}
