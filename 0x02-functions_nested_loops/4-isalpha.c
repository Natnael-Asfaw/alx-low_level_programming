#include "main.h"
/**
*_isalpha - checks for alphabetic char
*@i: the char to look for
*Return: 1 if c is a letter else 0
*/
int _isalpha(int i)
{
return ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'));
}
