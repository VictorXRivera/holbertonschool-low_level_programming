#include "lists.h"

/**
  * free_listint - Function to free list
  * @head: pointer to struct
  * Return: Nothing
  */
void free_listint(listint_t *head)
{
	listint_t *delete;

	while (head != NULL)
	{
		delete = head;
		head = delete->next;
		free(delete);
	}
}
