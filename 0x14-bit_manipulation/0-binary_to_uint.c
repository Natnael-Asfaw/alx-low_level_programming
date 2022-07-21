#include "main.h"

/**
 * binary_to_uint - converts a binary num to unsigned int
 * @b: string containing the binary number
 * Return: the converted num
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int deci = 0;
if (!b)
return (0);
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
deci = 2 * deci + (b[i] - '0');
}
return (deci);
}
