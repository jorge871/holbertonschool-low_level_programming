#include <stdio.h>

int
main(void)
{
int a;
for (a = '0'; a <= '9'; ++a)
{
return (a);
if (a < '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
