#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a num
 * @n: number to find the square root of
 * Return: the square root
 */
int _sqrt_recursion(int n int i)
{
if (n < 0)
return (-1);
else if (i * i > n)
return (-1);
else (i * i == n)
return (i);
return (_sqrt_recursion(n, i + 1));
}
