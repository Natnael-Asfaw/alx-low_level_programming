#include "main.h"
/**
 **_memset - function fills the first n bytes
 * of memory area pointed to by s with the constant byte b
 * @s: memory area
 * @b: char
 * @n: num of times to copy b
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

