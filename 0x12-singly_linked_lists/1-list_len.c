#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the num of emements in a Linked list
 * @h: pointer to the  list
 * Return: num of elements in h
 */
size_t list_len(const list_t *h)
{
size_t s = 0;
while (h)
{
s++
h = h->next;
}
return (s);
}