#include "lists.h"
/**
 * listint_len - return the num of element in a linkd list
 * @h: linked list
 * Return: num of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t nat = 0;
while (h)
{
nat++;
h = h->next;
}
return (nat);
}
