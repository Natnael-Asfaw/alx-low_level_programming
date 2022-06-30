#include <stdlib.h>
#include "main.h"

/**
 * *_memset - files memory with a constatnt byte
 * @s: memory to be filled
 * @b: char to copy
 * @n: num of times to copy b
 * Return: pointer to the memory area s
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

/**
 * *_calloc - a function thta allocate memory for an array using
 * malloc
 * @nmemb: num of elements in the array
 * @size: size of each elements
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char nat;
if (nmemb == 0 || size == 0)
return (NULL);
nat = malloc(size * nmemb);
if (nat == NULL)
return (NULL);
_memset(nat, 0, nmemb * size);
return (nat);
}
