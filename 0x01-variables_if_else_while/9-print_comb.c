#include <stdio.h>
/**
*main - prints all possible combination
*of singel-digit num
*Return: 0
*/
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
