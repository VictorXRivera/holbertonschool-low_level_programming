#include "lists.h"

/**
  * print_listint - function to list integers
  * @h: Pointer to struct
  * Return: Number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t index = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		index++;
	}
	return (index);
}
