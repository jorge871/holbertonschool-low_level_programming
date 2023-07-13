#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Prints the strings function
 * @separator: This is pointer
 * @n: Is a variable
 * @...: This is a variable
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strng;
	char *str;
	unsigned int t;

	va_start(strng, n);
	for  (t = 0; t < n; t++)
	{
	str = va_arg(strng, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
	if (t != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");

	va_end(strng);
}
