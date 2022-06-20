#include "main.h"
#include <stdio.h>
/**
 **_strstr - finds the first occurrence of
 *the substring neddle in the string haystack
 *the terminatinng null bytes (\0) are not compared
 *@haystack: string to search in
 *@needle: substring to look for
 *Return: pointer to the beginning of the located substring or NULL
 *if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int i, n;
for (i = 0; haystack[i] != '\0'; i++)
{
for (n = 0; needle[n] != '\0'; n++)
{
if (haystack[i + n] != needel[n])
break;
}
if (!needle[n])
return (&haystack[i]);
}
return (NULL);
}
