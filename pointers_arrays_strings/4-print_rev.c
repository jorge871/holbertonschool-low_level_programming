#include "main.h"
void
print_rev(char *s)
{
int i;
for (i = 0; *(s + i); i++)
{
}
i--;
for (; *(s + i); i--)

_putchar(*(s + i));

_putchar('\n');
}
