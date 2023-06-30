#include "main.h"
int
is_prime_number(int n)
{
	if (n < 0 || n == 1)
	{
		return (0);
	}
	return (_is_prime_n(n, n - 1));
}
int
_is_prime_n(int n, int a)
{
	if (a == 1)
	{
		return (1);
	}
	if (n % a == 0)
	{
		return (0);
	}
	if (n % a != 0)
	{
		return (_is_prime_n(n, a - 1));
	}
	return (0);
}
