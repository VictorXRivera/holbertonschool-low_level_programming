#include "holberton.h"

/**
  * reverse_array - function to reverse array
  * @a: pointer
  * @n: parameter
  * Return: Success
  */
void reverse_array(int *a, int n)
{
	int index;
	int rev;

	for (index = 0; index < n / 2; index++, --n)
	{
		rev = a[index];
		a[index] = a[n - 1];
		a[n - 1] = rev;
	}
}
