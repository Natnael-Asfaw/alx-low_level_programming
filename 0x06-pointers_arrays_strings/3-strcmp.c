#include "main.h"
/**
 * _strcmp - a function compares two string
 * @s1: first string
 * @s2: second string
 * Return: if s1 is less -num equal 0 s1 greater than s2 +num
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == '\0')
{
return (0);
}
s1++;
s2++;
}
return (*s1 - *s2);
}
