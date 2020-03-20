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

	while (str[counter] != '\0')
		++counter;

	new_end = malloc(sizeof(list_t));
	if (new_end == NULL)
	{
		return (NULL);
	}
	temp = *head;
	new_end->len = counter;
	new_end->str = dup;
	new_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_end;
		return (NULL);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_end;
	return (new_end);
}
