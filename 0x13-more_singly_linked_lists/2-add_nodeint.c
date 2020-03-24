#include "lists.h"

/**
  * add_nodeint - Function to add int node
  * @head: Double pointer
  * @n: const int
  * Return: Added node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element;

	new_element = malloc(sizeof(listint_t));
	if (new_element == NULL)
	{
		return (NULL);
	}
	new_element->n = n;
	new_element->next = *head;
	*head = new_element;
	return (new_element);
}
