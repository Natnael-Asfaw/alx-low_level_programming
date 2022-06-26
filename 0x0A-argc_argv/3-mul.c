#include <stdio.h>
#include "main.h"
/**
 * main - Program that multiplies two num
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char *argv[])
{
int i, mul;
mul = 0;
for (i = 0; i < argc; i++)
{
mul = mul * argc;
printf("%d\n", mul);
}
return (0);
}
