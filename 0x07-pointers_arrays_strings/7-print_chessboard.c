#include "main.h"
/**
 *print_chessboard - prints chessboard
 *@a: two dimension arry
 */
void print_chessboard(char (*a)[8])
{
int i, n;
for (i = 0; i < 8; i++)
{
for (n = 0; n < 8; n++)
{
_putcahr(a[i][n]);
}
_putchar('\n');
}
}

