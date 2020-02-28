#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - function to print all arguments it receives
  * @argc: Argument count
  * @argv: double pointer
  * Return: Argument received
  */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
