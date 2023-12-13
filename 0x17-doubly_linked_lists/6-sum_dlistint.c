#include "lists.h"

/**
* sum_dlistint - returns the sum of all the data (n) of the list
* @head: a pointer to the doubly linked list
* Return: sum to all the ns in the list
*/
int sum_dlistint(dlistint_t *head)
{

unsigned int sum = 0;

if (head == NULL)
{
return (0);
}

while (head)
{
sum += head->n;
head = head->next;
}

return (sum);

}
