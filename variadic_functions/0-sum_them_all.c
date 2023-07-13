#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Function.
 * @n: variable.
 * @...: variable
 * Return: Return zero.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sl;
	unsigned int cont;
	int a;

	if (n == 0)
		return (0);
	va_start(sl, n);
	for (cont = 0; cont < n; cont++)
		a = a + va_arg(sl, const unsigned int);
	va_end(sl);
	return (a);
}
