#include "main.h"
#include <stdio.h>
/**
 **_strpbrk - search a string for any of
 *a set of b
 *@s: string
 *@accept: string containing the bytes to look
 *for
 *Return: pointer to the byte in s that matches
 *one of the bytes in accept or NULL if no such bytes is found
 */
char *_strpbrk(char *s, char *accept)
{
int i, n;
for (i = 0; *s != '\0'; i++)
{
for (n = 0; accept[n] != '\0'; n++)
{
if (*s == accept[n])
{
return (s);
}
}
s++;
}
return (NULL);
}

