#include "lists.h"

/**
  * add_nodeint_end - Function to add node to end
  * @head: double pointer
  * @n: Integer
  * Return: End of node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end, *temp;

	if (!n)
		return (NULL);

	new_end = malloc(sizeof(listint_t));

	if (new_end == NULL)
	{
		return (NULL);
	}
	new_end->n = n;
	new_end->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = new_end;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_end;
	return (new_end);
}
