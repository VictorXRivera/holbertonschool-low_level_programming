#include "lists.h"

/**
 * free_dlistint - function to free the list
 * @head: start of list
 * Return: Freedom!
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *deletion;

	while (head != NULL)
	{
		deletion = head;
		head = head->next;
		free(deletion);
	}
}
