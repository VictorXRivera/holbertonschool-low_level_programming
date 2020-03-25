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

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	temp = *head;
	for (counter = 2; counter <= idx - 1; counter++)
	{
		temp = temp->next;

		if (temp == NULL)
			return (NULL);
	}
	if (temp != NULL)
	{
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}
	else
		return (NULL);
}
