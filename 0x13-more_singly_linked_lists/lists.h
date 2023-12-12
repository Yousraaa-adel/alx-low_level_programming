#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_t - singly linked list
 * @data: integer
 * @link: pointer points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_t
{
    int data;
    struct node *link;
}

size_t print_listint(const listint_t *h);

#endif
