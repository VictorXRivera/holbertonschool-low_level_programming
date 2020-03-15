#include "variadic_functions.h"

/**
  * print_strings - function to print strings
  * @separator: pointer to char printed in between int
  * @n: number of strings
  * Return: Nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *ptr;

	if (separator == NULL)
		separator = "";

	va_start(list, n);
	for (i = 0; i < n && n != '\0'; i++)
	{
		ptr = va_arg(list, char *);
		if (!ptr)
			printf("(nil)");
		else
			printf("%s", ptr);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
