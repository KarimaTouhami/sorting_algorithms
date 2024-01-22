#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: doubly linked list of integers
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
    listint_t *current, *next, *prev;

    if (list == NULL || *list == NULL)
        return;

    current = *list;
    next = current->next;

    while (next != NULL)
    {
        prev = current;
        next = current->next;
        if (current->n > next->n)
        {
            if (current->prev != NULL)
                current->prev->next = next;
            else
                *list = next;
            current->next = next->next;
            next->prev = current->prev;
            current->prev = next;
            next->next = current;
            if (current->next != NULL)
                current->next->prev = current;
            print_list(*list);
            current = prev;
        }
        else
            current = current->next;
    }
}
