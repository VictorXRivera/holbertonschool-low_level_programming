#include "lists.h"

/**
  * free_list - function to free list
  * @head: pointer to list_t struct
  * Return: Nothing
  */
void free_list(list_t *head)
{
	list_t *delete;

	while (head != NULL)
	{
		delete = head;
		head = head->next;
		free(delete->str);
		free(delete);
	}
}
