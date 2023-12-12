#include "lists.h"

/**
* pop_listint - Deletes the head of the list
* @head: a pointer to pointer to the list
* Return:  the head node’s data (n) and 0 if list is empty
*/
int pop_listint(listint_t **head)
{

listint_t *temp;
int n_copy;

if (*head == NULL)
{
return (0);
}

temp = *head;
n_copy = temp->n;
*head = temp->next;
free(*head);

return (n_copy);

}
