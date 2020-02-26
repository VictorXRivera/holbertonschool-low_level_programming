#include "holberton.h"

/**
  * factorial - Function to find factorial of num
  * @n: integer parameter
  * Return: Factorial
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
