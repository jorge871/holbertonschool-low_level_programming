#include "main.h"
void
print_rev(char *s)
{
int a;
while (*(s + a))
a++;
a--;


while (*(s + a))
{
_putchar(*(s + a));
a--;
}
_putchar('\n');
}
