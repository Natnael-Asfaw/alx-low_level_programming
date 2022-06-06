#include <stdio.h>
/**
*main - prints al single digit num of base
*10 starting from 0, followed by new line only using putchar
*Return: 0
*/
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
