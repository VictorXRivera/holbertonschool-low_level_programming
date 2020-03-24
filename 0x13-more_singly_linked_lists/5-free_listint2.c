#include "lists.h"

/**
  * free_listint2 - Function that frees list
  * and sets head to NULL
  * @head: Double pointer
  * Return : nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
