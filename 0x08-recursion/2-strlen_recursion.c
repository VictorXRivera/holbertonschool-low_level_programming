#include "holberton.h"

/**
  * _strlen_recursion - function to return length of string
  * @s: pointer to string
  * Return: String length
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
