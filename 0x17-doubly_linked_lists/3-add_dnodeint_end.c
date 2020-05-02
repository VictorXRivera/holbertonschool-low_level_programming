#include "lists.h"

/**
 * add_dnodeint_end - function to add node to end of list
 * @head: start of list
 * @n: Elements
 * Return: New node on success or NULL on fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *end;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	end = *head;
	new_node->n = n;
	new_node->next = NULL;
	if ((*head) == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	while (end->next != NULL)
		end = end->next;
	end->next = new_node;
	new_node->prev = end;
	return (new_node);
}
