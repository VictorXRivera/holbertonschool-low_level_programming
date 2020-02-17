#include <stdio.h>
#include "holberton.h"

/**
  * main - program for fizzbuzz
  * Return: Success
  */
int main(void)
{
	int n;
	
	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
			printf("Fizz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
	}
	printf("%d ", n);
	printf("\n");
	return (0);
}
