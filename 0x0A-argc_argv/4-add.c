#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - program to add integers
  * @argc: Argument count
  * @argv: Array of strings
  * Return: Result of addition
  */
int main(int argc, char *argv[])
{
	int index, result;

	if (argc < 1)
		printf("%d\n", argc);

	else if (argc > 1)
	{
		for (index = 0; index < argc; index++)
		{
			result += atoi(argv[index]);
		}
		printf("%d\n", result);
	}
	return (0);
}
