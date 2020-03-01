#include "holberton.h"
#include <stdio.h>

/**
  * main - function that prints the number of arguments passed into it
  * @argc: number of arguments
  * @argv: pointer that is now void
  * Return: Number of arguments
  */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc);

	return (0);
}
