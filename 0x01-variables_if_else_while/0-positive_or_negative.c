#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - prints out positive if n>0 else negative and n==0 prints zero
*Return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else
printf("%d is negative\n", n);
if (n == 0)
printf("%d is zero\n", n);
return (0);
}
