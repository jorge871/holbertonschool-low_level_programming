#include "main.h"

int
_abs(int w)
{
if (w < 0)
{
w = w * -1;
return (w);
}
if (w >= 0)
{
return (w);
}
else
{
return (0);
}
}
