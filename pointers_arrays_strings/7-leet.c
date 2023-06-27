#include "main.h"
char
*leet(char *str)
{
int f = 0;
char letters[] = "AEOTL";
char numbers[] = "43071";

while (*(str + f))
{
int x = 0;

for (; letters[x] && x >= 0; x++)
if (str[f] == letters[x] || str[f] == (letters[x] + 32))
{
str[f] = numbers[x];
x = -1;
}
f++;
}
return (str);
}
