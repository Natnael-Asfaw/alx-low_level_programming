#include "main.h"
/**
 * reverse_array - a function that reverses the content
 * of an array of int
 * @a: array to be rev
 * @n: num of elements in the array
 */
void reverse_array(int *a, int n)
{
int i, b, rev;
b = n - 1;
for (i = 0; i < n / 2; i++)
{
rev = a[i];
a[i] = a[b];
a[b--] = rev;
}
}
