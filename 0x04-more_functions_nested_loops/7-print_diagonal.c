#include "main.h"
/**
*print_diagonal - draws a diagonal line on the terminal
*@i: num of times the char \ should beprinted
*/
void print_diagonal(int i)
{
if (i <= 0)
{
_putchar('\n');
}
else
{
int n, a;
for (n = 0; n < i; n++)
{
for (a = 0; a < i; a++)
{
if (a == n)
_putchar('\\');
else if (a < n)
_putchar(' ');
}
_putchar('\n');
}
}
}
