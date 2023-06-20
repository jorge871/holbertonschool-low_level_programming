#include "main.h"

int
_isalpha(int f)
{
if ((f >= 'a' && f <= 'z') || (f >= 'A' && f <= 'Z'))
{
return (1);
}
else
{
return (0);
}
putchar('\n');
}
