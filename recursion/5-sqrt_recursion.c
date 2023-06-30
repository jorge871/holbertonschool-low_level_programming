#include "main.h"

int
_sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_re(n, 0));
}
int
_sqrt_re(int u, int d)
{
	if (d * d == u)
	{
		return (d);
	}
	if (d * d > u)
	{
		return (-1);
	}
	return (_sqrt_re(u, d + 1));
}
