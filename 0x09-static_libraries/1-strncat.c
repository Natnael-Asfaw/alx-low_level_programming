#include "main.h"
/**
 **_strncat - A function that concatenates n bytes from
 *a string to another string
 *@dest: the string to concatenates to
 *@src: the string to concatenates from
 *@n: num of bytes
 *Return: a pointer to the resulting string 'dest'
 */
char *_strncat(char *dest, char *src, int n)
{
int i, a;
i = 0;
a = 0;
while (dest[i] != '\0')
	i++;
while (src[a] != '\0' && a < n)
{
dest[i] = src[a];
i++;
a++;
}
dest[i] = '\0';
return (dest);
}

