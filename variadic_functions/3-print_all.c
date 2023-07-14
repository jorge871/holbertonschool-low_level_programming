#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int w = 0;
	char *str, *sep = " ";

	va_list ls;

	va_start(ls, format);

	if (format)
	{
		while (format[w])
		{
			switch (format[w])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ls, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ls, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ls, double));
					break;
				case 's':
					str = va_arg(ls, char*);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					w++;
					continue;
			}
			sep =  ", ";
			w++;
		}
	}
	printf("\n");
	va_end(ls);
}
