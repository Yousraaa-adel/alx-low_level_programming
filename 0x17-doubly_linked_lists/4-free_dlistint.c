#include "lists.h"


/**
* free_dlistint - frees the doubly linked list
* @head: a pointer to the list
* Return: void
*/
void free_dlistint(dlistint_t *head)
{

dlistint_t *t, *t2;

t = head;

while (head != NULL)
{
/*Store the next node's address in t2*/
t2 = t->next;

/*Free the current node*/
free(t);


/*Move t to the next node (stored in t2)*/
t = t2;
}

}
