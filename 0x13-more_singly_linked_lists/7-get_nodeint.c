#include "lists.h"

/**
  * get_nodeint_at_index - function to return nth node
  * @head: head of list
  * @index: index of node
  * Return: Nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (counter < index && head != NULL)
	{
		head = head->next;
		counter++;
	}
	return (head);
}
