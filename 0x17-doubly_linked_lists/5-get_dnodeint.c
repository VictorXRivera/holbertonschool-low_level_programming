#include "lists.h"

/**
 * get_dnodeint_at_index - function to get node at nth index
 * @head: start of list
 * @index: position of list
 * Return: Node at nth position
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_int = 0;

	while (node_int < index && head != NULL)
	{
		head = head->next;
		node_int++;
	}
	return (head);
}
