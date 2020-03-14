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
	unsigned int i;

	if (separator == NULL)
		separator = "";

	va_start(list, n);
	for (i = 0; i < n && n != '\0'; i++)
	{
		printf("%i", va_arg(list, const unsigned int));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
