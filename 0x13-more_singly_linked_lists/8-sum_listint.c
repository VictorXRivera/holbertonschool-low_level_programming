#include "lists.h"

/**
  * sum_listint - function to sum of data
  * @head: Start of list
  * Return: Sum of data in list
  */
int sum_listint(listint_t *head)
{
	listint_t *addeddata = head;
	int sum = 0;

	while (addeddata != NULL)
	{
		sum += addeddata->n;
		addeddata = addeddata->next;
	}
	return (sum);
}
