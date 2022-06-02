/*
*main - prints out the size of char, int, long int, long long int, float
*Return: 0 if the code is right
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
printf("Size of a int: %i byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %i byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %i byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %i byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
