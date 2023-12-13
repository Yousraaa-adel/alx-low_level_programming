#include "lists.h"

/**
* free_dlistint - frees the doubly linked list
* @head: a pointer to the list
* Return: void
*/
void free_dlistint(dlistint_t *head)
{

if (head != NULL)
{
/*traverse the list freeing each node*/
dlistint_t *next = head->next;

free(head);

head = next;

}


}
