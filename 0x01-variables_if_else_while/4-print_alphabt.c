#include <stdio.h>
/**
*main - prints alphabet in lowercase
*followed by new line except q and e
*Return: 0
*/
int main(void)
{
char n = 'a';
while (n <= 'z')
{
if (n != 'e' && n != 'q')
{
putchar(n);
}
n++;
} 
putchar('\n');
return (0); 
}
