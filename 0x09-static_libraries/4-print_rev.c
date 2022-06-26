#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by \n
 * @s: string
 */
void print_rev(char *s)
{
int i, n, rev;
i = 0;
while (s[i] != '\0')
{
i++;
}
rev = i;
for (n = rev - 1; n >= 0; n--)
{
_putchar(s[n]);
}
_putchar('\n');
}
