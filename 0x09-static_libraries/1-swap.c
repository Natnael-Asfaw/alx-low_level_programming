#include "main.h"
/**
 *swap_int - swaps the value of two integers by
 *using pointers
 *@a: pointer to the first value
 *@b: pointer of pointer and stors the second value
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}

