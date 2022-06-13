#include "main.h"
/**
 *reset_to_98 - reset the first value of a viriabel to 98
 *@n: is a pointer
 */
void reset_to_98(int *n);
{
int i;
int *n;
i = 402;
n = i;
printf("n=%d\n", *n);
*n = 98;
printf("n=%d\n", *n);
}
