#include "holberton.h"

/**
  * _strlen - function to print length of string
  * @s: parameter
  * Return: Success
  */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
