#include "lists.h"

/**
  * listint_len - function to print number of elements
  * @h: Pointer to struct
  * Return: Number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t elements;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
