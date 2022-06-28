#include "main.h"
/**
 **_memcpy - function copies n bytes from memory
 *area src to memory area dest
 *@src: memory area to copy
 *@dest: memory area to copy to
 *@n: num of bytes to copy
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

