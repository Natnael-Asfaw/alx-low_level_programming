#include "main.h"
/**
 * _puts - prints a string, followed by \n
 * @str: pointer to the string
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
printf("%s\n", str[i]);
}
