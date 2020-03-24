#include "lists.h"

/**
  * free_listint2 - Function that frees list
  * and sets head to NULL
  * @head: Double pointer
  * Return : nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *erase;
	if (!head)
		return;
	while (*head != NULL)
	{
		erase = (*head)->next;
		free(*head);
		*head = erase;
	}
	*head = NULL;
}
