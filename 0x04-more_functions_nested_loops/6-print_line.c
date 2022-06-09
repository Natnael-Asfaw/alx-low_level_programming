#include "main.h"
/**
*print_line - draws a straight line in the terminal
*@i: num of times the char _ should be printed
*/
void print_line(int i)
{
if (i <= 0)
{
_putchar('\n');
}
else
{
int n;
for (n = 1; n <= i; n++)
{
_putchar('_');
}
_putchar('\n');
}
}
