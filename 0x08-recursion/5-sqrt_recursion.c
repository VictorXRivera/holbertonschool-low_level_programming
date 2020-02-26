#include "holberton.h"

/**
  * findroot - function to find sqrt
  * @n: integer parameter
  * @x: integer parameter
  * Return: Sqrt if successful
  */
int findroot(int n, int x)
{
	if (x * x == n)
		return (x);

	else if (x * x < n)
		return (findroot(n, x + 1));
	else
		return (-1);
}

/**
  * _sqrt_recursion - function to find sqrt recursively
  * @n: integer parameter
  * Return: Sqrt of number
  */
int _sqrt_recursion(int n)
{
	return (findroot(n, 1));
}
