#include "holberton.h"
#include <stdio.h>
/**
  * print_array - function to print elements of array
  * @a: pointer parameter
  * @n: parameter
  * Return: Success
  */
void print_array(int *a, int n)
{
	int start;

	for (start = 0; start < n; start++)
	{
		printf("%d", a[start]);
		if (start < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
