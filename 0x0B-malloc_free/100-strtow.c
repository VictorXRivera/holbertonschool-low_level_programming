#include "holberton.h"

/**
  * strtow - function to split words
  * @str: pointer to string
  * Return: string
  */
char **strtow(char *str)
{
	char *ptr;

	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(char));
	if (ptr == NULL)
		return (NULL);

	return (strtow(ptr));
}
