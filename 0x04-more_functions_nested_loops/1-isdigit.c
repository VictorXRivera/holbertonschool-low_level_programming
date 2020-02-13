#include "holberton.h"

/**
  * _isdigit - function to check if parameter is a digit
  * @c: parameter
  * Return: 1 if c is a digit, 0 otherwise
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	else
		return (0);
}
