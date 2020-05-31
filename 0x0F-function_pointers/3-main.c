#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * main - program for calc
  * @argc: number of arguments
  * @argv: arguments
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int arg1, arg2, sum;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	func = (*get_op_func)(argv[2]);
	if (func == NULL || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	sum = func(arg1, arg2);
	printf("%i\n", sum);

	return (0);
}
