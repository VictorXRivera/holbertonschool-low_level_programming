#include "lists.h"

/**
  * pop_listint - function to pop list
  * @head: double pointer
  * Return: Popped list
  */
int pop_listint(listint_t **head)
{
	listint_t *pop = (*head);
	int counter;

	if (pop == NULL || head == NULL)
		return (0);
	counter = pop->n;
	(*head) = (*head)->next;
	free(pop);

	return (counter);
}
