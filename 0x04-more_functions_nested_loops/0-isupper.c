#include "holberton.h"

/**
  * _isupper - function to check if variable is lowercase
  * @c: parameter
  * Return: 1 if lower, 0 if else
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else
		return (0);
}
