#include "main.h"
/**
 * factorial - returns the fuctorial of a given num
 * @n: int to return the factorial from
 * Return: factorial
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}

