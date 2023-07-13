#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Print numbers
 * @separator: This is pointer
 * @n: This is a variable
 * @...: This is a variable.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numb;
	unsigned int index;

	va_start(numb, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numb, int));

		if (index != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");

	va_end(numb);
}
