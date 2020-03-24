#include "lists.h"

/**
  * get_nodeint_at_index - function to return nth node
  * @head: head of list
  * @index: index of node
  * Return: Nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth = head;
	unsigned int counter = 0;

	if (nth == NULL || head == NULL)
		return (0);
	if (!index)
		return (NULL);

	while (nth != NULL)
	{
		if (counter == index)
		{
			return (nth);
		}
		counter++;
		nth = nth->next;
	}
	return (nth);
}
