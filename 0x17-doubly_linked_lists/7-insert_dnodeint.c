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

	if ((*h) == NULL)
		return (NULL);

	nth_node = malloc(sizeof(dlistint_t));
	if (nth_node == NULL)
		return (NULL);
	nth_node->n = n;
	temp = (*h);
	if (idx == 0)
	{
		nth_node->next = (*h);
		if (*h)
			(*h)->prev = nth_node;
		(*h) = nth_node;
		return (*h);
	}
	for (; idx > 1; idx--)
	{
		if (temp == NULL)
		{
			free(nth_node);
			return (NULL);
		}
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);
	nth_node->next = temp->next;
	nth_node->prev = temp;
	if (temp->next)
		nth_node->next->prev = nth_node;
	nth_node->prev->next = nth_node;
	return (nth_node);
}
