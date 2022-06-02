/*
*main - prints out the size of various types
*Return: 0 if exited properly, non-zero otherwise
*/
#include <stdio.h>

int main(void)
{
char i;
int b;
long int e;
long long int d;
float f;

printf("Size of a char: %i byte(s)\n", (unsigned long)sizeof(i));
printf("Size of an int: %i byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %i byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %i byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %i byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
