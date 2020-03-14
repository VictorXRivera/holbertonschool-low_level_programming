#include "variadic_functions.h"

/**
  * print_numbers - variadic func to print numbers
  * @separator: char to be printed
  * @n: numbers to be printed
  * Return: Nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i, count;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		count = va_arg(list, const unsigned int);
		printf("%d", count);
		if (separator == NULL)
		{
			separator = "";
		}
		else if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
