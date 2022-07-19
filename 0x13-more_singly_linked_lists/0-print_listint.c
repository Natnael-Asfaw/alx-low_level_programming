#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print all the elements of a linked list
 * @h: linked list of type listint_t to print
 * Return: num of nodes
 */
size_print_listint(const listint_t *h)
{
size_t node = 0;

while (h)
{
node++;
printf("%d\n", h->n);
h = h->next;
}
return (node);
}
