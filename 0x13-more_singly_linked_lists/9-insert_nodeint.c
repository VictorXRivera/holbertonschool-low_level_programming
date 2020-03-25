#include "lists.h"

/**
  * insert_nodeint_at_index - function to insert node at index
  * @head: double pointer
  * @idx: unsigned int
  * @n: int
  * Return: inserted node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int counter;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	temp = *head;
	if (idx == 0)
	{
		new_node->next = *head;
		*head =new_node;
		return (new_node);
	}
	for (counter = 2; counter < idx - 1; counter++)
	{
		temp = temp->next;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
