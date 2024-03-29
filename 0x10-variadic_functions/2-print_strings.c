#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: string to be printed between stringd
 * @n: number of strings passed to the function
 * Return: printed strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(list);
	printf("\n");
}
