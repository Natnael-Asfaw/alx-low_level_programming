#include "main.h"
/**
 * copies the string pointed to by src, including
 * the terminating null byte (\0), to the
 * buffer pointed to by dest
 * @dest: pointer
 * @src: string
 */
char *_strcpy(char *dest, char *src)
{
int cpy, i;
cpy = 0;
while (src[cpy] != '\0')
{
cpy++;
}
for (i = 0; i < cpy; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
