#include "lists.h"

/**
  * print_list - function to print a list
  * @h: pointer to struct defined in header
  * Return: size_t variable
  */
size_t print_list(const list_t *h)
{
	size_t list = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		list++;
	}
	return (list);
}
