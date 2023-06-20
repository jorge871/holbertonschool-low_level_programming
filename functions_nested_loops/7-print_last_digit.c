#include "main.h"
int
print_last_digit(int l)
{
l = l % 10;
if (l < 0)
{
l = l * -1;
}
_putchar(l + '0');
return (l);
}
