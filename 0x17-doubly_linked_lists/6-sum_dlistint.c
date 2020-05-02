#include "lists.h"

/**
 * sum_dlistint - function to add numbers in list
 * @head: start of the list
 * Return: Sum of list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *add = head;
	int sum = 0;

	while (add != NULL)
	{
		sum += add->n;
		add = add->next;
	}
	return (sum);
}
