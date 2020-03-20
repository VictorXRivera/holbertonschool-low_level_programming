#include "lists.h"

/**
  * add_node_end - function to add node towards the end
  * @head: pointer to start of list
  * @str: pointer to malloc'ed string
  * Return: New element
  */
list_t *add_node_end(list_t **head, const char *str)
{
	int counter = 0;
	list_t *new_end, *temp;
	char *dup = strdup(str);

	if (!str)
		return (NULL);

	new_end = malloc(sizeof(list_t));
	if (new_end == NULL)
	{
		return (NULL);
	}
	while (str[counter] != '\0')
		++counter;
	new_end->len = counter;
	new_end->str = dup;
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
