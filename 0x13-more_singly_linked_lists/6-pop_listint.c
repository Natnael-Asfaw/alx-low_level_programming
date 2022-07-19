#include "lists.h"
/**
 * pop_listint - deletes the head node of alinked list
 * @head: pointer to the first linked list
 * Return: the data inside the element that was deleted
 * or if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *del;
int nat;
if (!head || !*head)
return (0);
nat = (*head)->n;
del = (*head)->next;
free(*head);
*head = del;
return (nat);
}
