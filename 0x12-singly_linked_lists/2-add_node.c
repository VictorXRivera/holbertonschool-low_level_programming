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
	char *dup = strdup(str);
	list_t *temp;

	while (dup[counter] != '\0')
		++counter;
	temp = *head;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->len = counter;
	temp->str = dup;
	temp->next = *head;
	*head = temp;
	return (temp);
}
