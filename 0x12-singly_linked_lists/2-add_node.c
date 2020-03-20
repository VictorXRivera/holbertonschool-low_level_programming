#include "lists.h"

/**
  * add_node - function to add a node to the start of list
  * @head: start of the list, double pointer
  * @str: pointer to malloc'ed string
  * Return: Added node
  */
list_t *add_node(list_t **head, const char *str)
{
	int counter = 0;
	list_t *temp;
	char *dup = strdup(str);

	temp = malloc(sizeof(list_t));

	if (!temp || !str)
		return (NULL);

	while (dup[counter])
		++counter;

	temp->len = counter;
	temp->str = dup;
	temp->next = *head;
	*head = temp;
	return (temp);
}
