#include "lists.h"

/**
* free_dlistint - frees the doubly linked list
* @head: a pointer to the list
* Return: void
*/
void free_dlistint(dlistint_t *head)
{

dlistint_t *next;

while (head)
{
/*traverse the list freeing each node*/
next = head->next;

free(head);

head = next;

}

}
