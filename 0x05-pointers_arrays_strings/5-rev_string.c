#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
char na;
int i, rev, rev1;
rev = 0;
rev1 = 0;
while (sna[na] != '\n')
{
na++;
}
rev1 = rev - 1;
for (i = 0; i < rev / 2; i++)
{
na = s[i];
s[i] = s[rev1];
s[rev1--] = na;
}
}
