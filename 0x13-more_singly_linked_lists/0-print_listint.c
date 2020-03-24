#include "lists.h"

/**
  * print_listint - function to list integers
  * @h: Pointer to struct
  * Return: Number of nodes
  */
size_t print_listint(const listint_t *h);
{
	unsigned long int index = 0;

	while (h)
	{
		printf("%i\n", index->n);
		index = index->next;
		index++;
	}
	return (index);
}
