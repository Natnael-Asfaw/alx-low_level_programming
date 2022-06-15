#include "main.h"
/**
 **_strcat - A function that conecatenates two strings
 *@dest: string
 *@src: string to add
 *Return: a pointer to the resulting string 'dest'
 */
char *_strcat(char *dest, char *src)
{
int i, n;
i = 0;
n = 0;
while (dest[i] != '\0')
	i++;
while (src[n] != '\0')
{
dest[i] = src[n];
n++;
i++;
}
dest[i] = '\0';
return (dest);
}

