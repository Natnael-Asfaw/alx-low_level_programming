#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list_t list
 * Return: the num of nodes printed
 */
size_t print_list(const list_t *h)
{
size_t n = 0;
for (h = 0; h++)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
}
return (n);
}
