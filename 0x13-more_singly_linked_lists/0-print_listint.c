#include "lists.h"
/**
 * print_listint - print all the elements of a linked list
 * @h: linked list of type listint_t to print
 * Return: num of nodes
 */
size_print_listint(const listint_t *h)
{
size_t nat = 0;

while (h)
{
printf("%d\n", h->n);
nat++;
h = h->next;
}
return (nat);
}
