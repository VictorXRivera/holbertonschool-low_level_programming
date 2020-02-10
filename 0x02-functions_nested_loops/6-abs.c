#include "holberton.h"

/**
  * _abs - function to find absolute value
  * @n: parameter
  * Return: Absolute value of number
  */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}
