#include "main.h"

/**
 * flip_bits - returns the num of bits you wolud need
 * to flip to get from one to another
 * @n: first num
 * @m: second num
 * Return: num of bit change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, num = 0;
unsigned long int first;
unsigned long int next = n ^ m;
for (i = 63; i >= 0; i--)
{
first = next >> i;
if (first & 1)
num++;

}
return (num);
}
