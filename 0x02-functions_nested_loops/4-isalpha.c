#include "holberton.h"

/**
  * _isalpha - function to check for alphabetic character
  * @c: parameter for function
  * Return: 1
  */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
