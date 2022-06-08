#include "main.h"
/**
*times_table - prints 9 times tabel, from 0
*/
void times_table(void)
{
int i, n, b;
for (i = 0; i < 10; i++)
{
for (n = 0; n < 10; n++)
{
b = n + i;
if (n == 0)
{
_putchar(b + '0');
}
if (b < 10 && n != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(b + '0');
}
else if (b >= 10)
{
_putchar(',');                                                    
_putchar(' ');                                                    
_putchar((b / 10) + '0');                                         
_putchar((b % 10) + '0');
}
}
_putchar('\n');
}
}
