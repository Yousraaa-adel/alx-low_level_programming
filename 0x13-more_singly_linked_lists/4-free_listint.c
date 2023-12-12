#include "lists.h"

/**
* free_listint - frees the list
* @head: a pointer to the list listint_t
* Returns: void
*/
void free_listint(listint_t *head)
{

listint_t *t, *t2;

t = head;
while (t != NULL)
{
/*Store the next node's address in t2*/
t2 = t->next;
/*Free the current node*/
free(t);
/*Move t to the next node (stored in t2)*/
t = t2;
}

}
