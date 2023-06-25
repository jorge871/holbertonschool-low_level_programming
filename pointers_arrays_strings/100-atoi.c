#include <stdio.h>

int _atoi(char *s)
{
	int sign = 1;

	unsigned int number = 0;

	while (*s == ' ')
	{
		s++;
	}

	if (*s == '+' || *s == '-')
	{
	sign = (*s++ == '-') ? -1 : 1;
	}

	while (*s >= '0' && *s <= '9')
	{
	number = number * 10 + (*s++ - '0');
	}

	return (sign * number);
}
