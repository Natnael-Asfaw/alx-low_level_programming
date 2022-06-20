#include "main.h"
/**
 *_strspn - gets the length of a prefix substrig
 *@s: string
 *@accept: string containig the list of char
 *Return: the num of bytes in the initial segment of s
 *which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
int i, a, n, b;
n = 0;
for (i = 0; s[i] != '\0'; i++)
{
b = 0;
for (a = 0; accept[a] != '\0'; a++)
{
if (s[i] == accept[a])
{
n++;
b = 1;
}
}
if (b == 0)
{
return (n);
}
}
return (0);
}
