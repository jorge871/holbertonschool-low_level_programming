#include "main.h"

void
print_alphabet_x10(void)
{
char o;
int a;

for (a = 0 ; a < 10 ; a++)
{
for (o = 'a'; o <= 'z' ; o++)
{
_putchar(o);
}
_putchar('\n');
}
}
