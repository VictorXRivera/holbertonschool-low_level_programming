#include "lists.h"

/**
 * deleteNode- function to delete node
 * @head: start of list
 * @deletion: to delete
 * Return: Void
 */
void deleteNode(dlistint_t **head, dlistint_t *deletion)
{
	if (*head == NULL || deletion == NULL)
		return;
	if (*head == deletion)
		*head = deletion->next;
	if (deletion->next != NULL)
		deletion->next->prev = deletion->prev;
	if (deletion->prev != NULL)
		deletion->prev->next = deletion->next;

	free(deletion);
}

/**
 * delete_dnodeint_at_index - function to delete a node at index
 * @head: start of the list
 * @index: postion
 * Return: 1 on success or -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *deletion = *head;
	unsigned int iterator;

	if (*head == NULL || index <= 0)
		return (-1);
	for (iterator = 1; deletion != NULL && iterator < index; iterator++)
		deletion = deletion->next;
	if (deletion == NULL)
		return (-1);
	deleteNode(head, deletion);
	return (1);
}
