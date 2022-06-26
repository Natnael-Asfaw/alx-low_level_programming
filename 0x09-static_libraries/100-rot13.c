#include "main.h"
/**
 **rot13 - encodes a string using rot13
 *@s: string
 *Return: the resulting string
 */
char *rot13(char *s)
{
int i, n;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (n = 0; a[n] != '\0'; n++)
{
if (s[i] == a[n])
{
s[i] = b[n];
break;
}
}
}
return (s);
}
