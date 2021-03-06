#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - returns a pointer to a newly
 * allocated space in memory which contains a copy
 * of the string given as a parameter
 * @str: string to duplicate
 * Return: Null if str = NULL, on success the _strdup
 * function returns a pointer to the duplicated string.
 * it returns NULL if insufficient memory was avaliabel
 */
char *_strdup(char *str)
{
char *nati;
unsigned int i, len;
i = 0;
len = 0;
if (str == NULL)
return (NULL);
while (str[len])
len++;
nati = malloc(sizeof(char) * (len + 1));
if (nati == NULL)
return (NULL);
while ((nati[i] = str[i] != '\0'))
i++;
return (nati);
}
