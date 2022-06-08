#include "main.h"
/**
*print_sign - prints the sign of a number
*@i: int
*Return: 1 and prints +, - and 0 depending on the number
*/
int prints_sign(int i)
{
if (i > 0)
{
_putchar('+');
return (1);
}
else if (i == 0)
{
_putchar(48);
return (0);
}
else if (i < 0)
{
_putchar('-');
}
return (-1);
}
