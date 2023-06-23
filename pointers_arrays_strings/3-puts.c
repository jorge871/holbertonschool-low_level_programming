#include "main.h"

void
_puts(char *str)
{
	int cont = 0;
	while (*(str + cont))
	{
		_putchar(*(str + cont));
		cont++;
	}
	{
		_putchar('\n');

}
}
