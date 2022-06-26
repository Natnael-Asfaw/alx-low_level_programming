#include "main.h"
/**
 * *leet - a function that encodes a string into 1337
 * @s: string to be encoded
 * Return: the resulting string
 */
char *leet(char *s)
{
int i, n;
char *a = "aAeEoOtTlL";
char *b = "4433007711";
for (i = 0; s[i] != '\0'; i++)
{
for (n = 0; n < 10; n++)
{
if (s[i] == a[n])
{
s[i] = b[n];
}
}
}
return (s);
}
