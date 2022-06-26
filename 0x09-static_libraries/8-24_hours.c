#include "main.h"
/**
*jack_bauer - prints every min of the day of jack bauer 24:00 hr
*/
void jack_bauer(void)
{
int i, n;
i = 0;
while (i < 24)
{
n = 0;
while (n < 60)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(':');
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
_putchar('\n');
n++;
}
i++;
}
}
