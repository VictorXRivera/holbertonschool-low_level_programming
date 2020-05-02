#include "lists.h"

/**
 * dlistint_len - function to print list
 * @h: start of the list
 * Return: Elements of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t dlistint = 0;

	while (h != NULL)
	{
		h = h->next;
		dlistint++;
	}
	return (dlistint);
}
