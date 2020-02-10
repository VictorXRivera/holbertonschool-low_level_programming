#include "holberton.h"

/**
  * _islower - function that checks for lowercase characters
  * c - parameter for function
  * Return: 0
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else 
		return (0);
}
