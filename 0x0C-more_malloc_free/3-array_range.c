#include <stdlib.h>
#include "main.h"

/**
 * *array_range - a function that creates an array of int
 * @min: min range of value stored
 * @max: max range of value stored and num of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
int i, size;
int nat;
if (min > max)
return (NULL);
size = max - min + 1;
nat = malloc(sizeof(int) * size);
if (nat == NULL)
return (NULL);
for (i = 0; min <= max; i++)
nat[i] = min++;
return (nat);
}
