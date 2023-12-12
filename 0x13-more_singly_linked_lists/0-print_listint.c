#include "lists.h"

/**
* print_listint - prints content of the string
* @h: singly linked list
* Return: prints elements of the list
*/
size_t print_listint(const listint_t *h)
{
    int i = 0;

    while (h != NULL)
    {
        printf("%d\n", h->data);
        h = h->link;
        i++;
    }

    return(i);
}
