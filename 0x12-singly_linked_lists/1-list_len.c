#include "lists.h"

/**
  * list_len - function to print elements
  * @h: pointer to struct
  * Return: Elements
  */
size_t list_len(const list_t *h)
{
	size_t list = 0;

	while (h != NULL)
	{
		h = h->next;
		list++;
	}
	return (list);
}
