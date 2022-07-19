#include "lists.h"
/**
 * revers_listint - Reverses a listint_t list.
 * @head: a pointer to the address of the
 * head of the list_t list.
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *front = NULL;
listint_t *next - NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = front;
front = *head;
*head = next;
}
*head = front;
return (*head);
}
