#include "main.h"
/**
*print_last_digit - prints last digit of a num
*@i: int
*Return: last digit of a num
*/
int print_last_digit(int i)
{
int n;
if (i < 0)
i = -i;
n = i % 10;
if (n < 0)
n = -n;
_putchar(n + '0');
return (n);
}
