#include "lists.h"

/**
* print_dlistint - Prints all elements on the list.
* @h: the linked list
* Return: the number of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{

int count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}

return (count);

}
