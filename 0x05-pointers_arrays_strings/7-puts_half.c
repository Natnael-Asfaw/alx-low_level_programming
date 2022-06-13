#include "main.h"
/**
 * puts_half - prints half of a string followed by \n
 * @str: string
 */
void puts_half(char *str)
{
int half, i, n;
half = 0;
while (str[half] != '\0')
{
half++;
}
if (half % 2 == 0)
{
for (i = half / 2; str[i])
{
_putchar(str[i]);
}
}
else if (half % 2)
{
for (n = (half - 1) / 2; n < half - 1; n++)
{
_putchar(str[n + 1]);
}
}
_putchar('\n');
}
