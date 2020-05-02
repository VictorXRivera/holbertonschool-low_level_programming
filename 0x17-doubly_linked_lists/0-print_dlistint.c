#include "lists.h"

/**
 * print_dlistint - function to print list
 * @h: start of the list
 * Return: Elements of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t dlistint = 0;

	while (h != NULL)
	{
		if (h->prev == NULL)
			printf("%d\n", h->n);
		else
			printf("%d\n", h->n);
		h = h->next;
		dlistint++;
	}
	return (dlistint);
}
